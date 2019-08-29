import setuptools




with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
     name='mrtutils',
     version='0.1',
     author="Jason Berger",
     author_email="JBerger@up-rev.com",
     description="Utilities for MrT",
     long_description=long_description,
     scripts=['mrtutils/mrt-config','mrtutils/modsync.py'],
     long_description_content_type="text/markdown",
     url="http://www.up-rev.com/",
     packages=setuptools.find_packages(),
     install_requires=[
        'markdown',
     ],
     classifiers=[
         "Programming Language :: Python :: 3",
         "License :: OSI Approved :: MIT License",
         "Operating System :: OS Independent",
     ],
 )
