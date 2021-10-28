# Microsoft Developer Studio Project File - Name="Convertor" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=Convertor - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Convertor.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Convertor.mak" CFG="Convertor - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Convertor - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "Convertor - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "Convertor - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../Build/Release"
# PROP Intermediate_Dir "../Build/Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /Ob2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_UNICODE" /FD /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x809 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 ../Build/Release/Build.obj /nologo /entry:"wWinMainCRTStartup" /subsystem:windows /machine:I386 /out:"../Build/Release/WM.exe"
# Begin Special Build Tool
OutDir=.\../Build/Release
SOURCE="$(InputPath)"
PreLink_Desc=Incrementing build number
PreLink_Cmds="..\Build\Release\Radiance.exe"	cl /nologo /c /Zl /Fo$(OutDir)\ Build.c
# End Special Build Tool

!ELSEIF  "$(CFG)" == "Convertor - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../Build/Debug"
# PROP Intermediate_Dir "../Build/Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_UNICODE" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x809 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 ../Build/Debug/Build.obj /nologo /entry:"wWinMainCRTStartup" /subsystem:windows /debug /machine:I386 /out:"../Build/Debug/WM.exe" /pdbtype:sept
# Begin Special Build Tool
OutDir=.\../Build/Debug
SOURCE="$(InputPath)"
PreLink_Desc=Incrementing build number
PreLink_Cmds="..\Build\Debug\Radiance.exe"	cl /nologo /c /Zl /Fo$(OutDir)\ Build.c
# End Special Build Tool

!ENDIF 

# Begin Target

# Name "Convertor - Win32 Release"
# Name "Convertor - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AboutDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Alloc.cpp
# End Source File
# Begin Source File

SOURCE=.\Application.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Area.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\AreaInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Checksum.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Conversion.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\ConversionInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\ConversionInterfaceFactory.cpp
# End Source File
# Begin Source File

SOURCE=.\Convertor.cpp
# End Source File
# Begin Source File

SOURCE=.\Convertor.rc
# End Source File
# Begin Source File

SOURCE=.\ConvertorDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\File.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\FilePointer.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Font.cpp
# End Source File
# Begin Source File

SOURCE=.\Glue.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\HtmlWriter.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Information.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\InformationInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Language.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Length.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\LengthInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Library.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Mass.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\MassInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Maths.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Registry.cpp
# End Source File
# Begin Source File

SOURCE=.\Report.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\ResourceString.cpp
# End Source File
# Begin Source File

SOURCE=.\SettingsDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\stdafx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\Library\StringDictionary.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\StrW.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Temperature.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\TemperatureInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Time.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\TimeInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Unicode.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\VAlloc.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Volume.cpp
# End Source File
# Begin Source File

SOURCE=.\Interfaces\VolumeInterface.cpp
# End Source File
# Begin Source File

SOURCE=.\Library\Win32Library.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AboutDlg.h
# End Source File
# Begin Source File

SOURCE=.\Library\Alloc.h
# End Source File
# Begin Source File

SOURCE=.\Application.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Area.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\AreaInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\array.h
# End Source File
# Begin Source File

SOURCE=.\Library\Checksum.h
# End Source File
# Begin Source File

SOURCE=.\Library\Configuration.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Conversion.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\ConversionInterface.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\ConversionInterfaceFactory.h
# End Source File
# Begin Source File

SOURCE=.\Convertor.h
# End Source File
# Begin Source File

SOURCE=.\ConvertorDlg.h
# End Source File
# Begin Source File

SOURCE=.\Library\File.h
# End Source File
# Begin Source File

SOURCE=.\Library\FilePointer.h
# End Source File
# Begin Source File

SOURCE=.\Library\Font.h
# End Source File
# Begin Source File

SOURCE=.\Glue.h
# End Source File
# Begin Source File

SOURCE=.\Library\HtmlWriter.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Information.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\InformationInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\Language.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Length.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\LengthInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\LibAll.h
# End Source File
# Begin Source File

SOURCE=.\Library\Library.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Mass.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\MassInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\Maths.h
# End Source File
# Begin Source File

SOURCE=.\Library\Registry.h
# End Source File
# Begin Source File

SOURCE=.\Report.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\Library\ResourceString.h
# End Source File
# Begin Source File

SOURCE=.\SettingsDlg.h
# End Source File
# Begin Source File

SOURCE=.\Library\stdafx.h
# End Source File
# Begin Source File

SOURCE=.\stdafx.h
# End Source File
# Begin Source File

SOURCE=.\Library\String.h
# End Source File
# Begin Source File

SOURCE=.\Library\StringDictionary.h
# End Source File
# Begin Source File

SOURCE=.\Library\StringList.h
# End Source File
# Begin Source File

SOURCE=.\Library\StrW.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Temperature.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\TemperatureInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\Templates.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Time.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\TimeInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\Types.h
# End Source File
# Begin Source File

SOURCE=.\Library\Unicode.h
# End Source File
# Begin Source File

SOURCE=.\Library\VAlloc.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\Volume.h
# End Source File
# Begin Source File

SOURCE=.\Interfaces\VolumeInterface.h
# End Source File
# Begin Source File

SOURCE=.\Library\Win32Library.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\Convertor.ico
# End Source File
# Begin Source File

SOURCE=.\res\Convertor.rc2
# End Source File
# End Group
# End Target
# End Project
