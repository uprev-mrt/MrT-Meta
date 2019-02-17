#!/bin/bash
#
# Autogenerates a header with versioning information.
#
# ./version.sh <build_number> <path/to/version.h>

BUILD_NUMBER=$1
HEADER_FILE=$2

#get last version tag
PREFIX="$(git describe --tags --match "VER-*" --abbrev=0)"
PATCH="$(git rev-list $PREFIX..HEAD --count)"

#make sure tag exists
if ! [[ "$PREFIX" == *"VER-"* ]]; then
    PREFIX="VER-ERR.ERR"
fi

#get Major.Minor
MAJ_MIN="${PREFIX/VER-/}"

#get last icd tag
ICD_TAG="$(git describe --tags --match "ICD-*" --abbrev=0)"

#make sure tag exists
if ! [[ "$ICD_TAG" == *"ICD-"* ]]; then
    ICD_TAG="ICD-0"
fi

#get icd
VERSION_ICD="${ICD_TAG/ICD-/}"

#get branch name
BRANCH_NAME="$(git branch | grep \* | cut -d ' ' -f2)"

#split MAJ_MIN into two variables
IFS='.' read -a SPLIT <<< "$MAJ_MIN"
MAJOR="${SPLIT[0]}"
MINOR="${SPLIT[1]}"

#if we are not on master, make MAJOR negative so we no it is not an official build
if ! [ $BRANCH_NAME = "master" ]; then
  MAJOR="-$MAJOR"
fi

#create version string
VERSION_STRING=$MAJOR.$MINOR.$PATCH.$BUILD_NUMBER

HDR_TXT=""
HDR_TXT="$HDR_TXT/*\r\n"
HDR_TXT="$HDR_TXT \* version.h\r\n"
HDR_TXT="$HDR_TXT \*  Auto-updated by version.sh\r\n"
HDR_TXT="$HDR_TXT \*/ \r\n"
HDR_TXT="$HDR_TXT \r\n"
HDR_TXT="$HDR_TXT#pragma once\r\n"
HDR_TXT="$HDR_TXT\r\n"
HDR_TXT="$HDR_TXT#define VERSION_MAJOR $MAJOR\r\n"
HDR_TXT="$HDR_TXT#define VERSION_MINOR $MINOR\r\n"
HDR_TXT="$HDR_TXT#define VERSION_PATCH $PATCH\r\n"
HDR_TXT="$HDR_TXT#define VERSION_BUILD $BUILD_NUMBER\r\n"
HDR_TXT="$HDR_TXT#define VERSION_STRING \"$VERSION_STRING\"\r\n"
HDR_TXT="$HDR_TXT\r\n"
HDR_TXT="$HDR_TXT#define VERSION_BRANCH \"$BRANCH_NAME\"\r\n"
HDR_TXT="$HDR_TXT#define VERSION_ICD $VERSION_ICD\r\n"

echo $VERSION_STRING
echo -e $HDR_TXT > $HEADER_FILE
