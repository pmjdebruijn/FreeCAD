﻿/*

Settings for FreeCAD installer

These typically need to be modified for each FreeCAD release

*/

# Make the installer as small as possible
# comment this for testing builds since it will reduce the time to create an installer
# a lot - for the cost of a much greater file size.
# So assure it is active for release builds!
SetCompressor /SOLID lzma

#--------------------------------
# Version number

!define APP_VERSION_MAJOR 0
!define APP_VERSION_MINOR 20
!define APP_VERSION_REVISION 2
!define APP_VERSION_EMERGENCY "" # use "1" for an emergency release of FreeCAD otherwise ""
	# alternatively you can use APP_VERSION_EMERGENCY for a custom suffix of the version number
!define APP_EMERGENCY_DOT "" # use "." for an emergency release of FreeCAD otherwise ""
!define APP_VERSION_BUILD 1 # Start with 1 for the installer releases of each version

!define APP_VERSION "${APP_VERSION_MAJOR}.${APP_VERSION_MINOR}.${APP_VERSION_REVISION}${APP_EMERGENCY_DOT}${APP_VERSION_EMERGENCY}" # Version to display

!define COPYRIGHT_YEAR 2022

#--------------------------------
# Installer file name
# Typical names for the release are "FreeCAD-020-Installer-1.exe" etc.

!define ExeFile "${APP_NAME}-${APP_VERSION_MAJOR}.${APP_VERSION_MINOR}.${APP_VERSION_REVISION}${APP_VERSION_EMERGENCY}-WIN-x64-installer-${APP_VERSION_BUILD}.exe"

#--------------------------------
# installer bit type - FreeCAD is only provided as 64bit build
!define MULTIUSER_USE_PROGRAMFILES64

#--------------------------------
# File locations
# !!! you need to adjust them to the folders in your Windows system !!!

!define FILES_FREECAD "G:\FreeCADInst\Installer\FreeCAD-0-20"
!define FILES_DEPS "G:\FreeCADInst\Installer\MSVCRedist"
!define FILES_THUMBS "G:\FreeCADInst\Installer\thumbnail"
