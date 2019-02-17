ECHO OFF
REM
REM File: version.cmd
REM Author: Jason Berger
REM
REM This batch file will use the most recent tag on the current branch that starts with 'VER-' to get MAJOR and MINOR
REM It will then count commits since that tag to get PATCH. BUILD is passed in as arg0 and the path to the version header is arg1
REM
REM example: version.cmd 87 argus_lca/src/verion.h

rem set Build to first arg
SET BUILD=%1

rem set file path to 2nd arg
SET VERISON_FILE_PATH=%2

rem Get Major.Minor prefix from last matching tag
FOR /F "tokens=*" %%g IN ('git describe --tags --match "VER-*" --abbrev^=0') do (SET PREFIX=%%g)

rem If no matching tag is found, set versions to 'ERR' so it wont build
IF not x%PREFIX:VER-=%==x%PREFIX% (

rem Get Patch by counting commits since that tag
FOR /F "tokens=*" %%g IN ('git rev-list %PREFIX%..HEAD --count') do (SET PATCH=%%g)


) ELSE (

SET PATCH=ERR
SET PREFIX=VER-ERR.ERR

)

rem put it all together for version string
SET VERSION=%PREFIX:VER-=%.%PATCH%.%BUILD%

rem split out values
FOR /F "tokens=1,2,3 delims=. " %%a in ("%VERSION%") do set MAJOR=%%a&set MINOR=%%b&set PATCH=%%c

rem Echo out build string for log
ECHO Branding as Version %VERSION%

rem print out text to header file
ECHO./*^

* version.h^

*^

*  Auto-updated by version.cmd^

*/^

^

#pragma once^

^

#define VERSION_MAJOR %MAJOR%^

#define VERSION_MINOR %MINOR%^

#define VERSION_PATCH %PATCH%^

#define VERSION_BUILD %BUILD%^

#define VERSION_STRING "%VERSION%" > %VERISON_FILE_PATH%
