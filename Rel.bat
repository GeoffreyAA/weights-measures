setlocal
set bin_name=WM
set dst_root=__Release__
set dst=%dst_root%\%bin_name%

if exist "%dst_root%" goto end
if exist "%bin_name%.zip" goto end

mkdir	"%dst%"
mkdir	"%dst%\Languages"
mkdir	"%dst%\Licences"

copy	"Build\x86\Release-XP\%bin_name%.exe" "%dst%"
rename	"%dst%\%bin_name%.exe" "%bin_name%32.exe"

copy	"Build\x64\Release\%bin_name%.exe" "%dst%"

copy	"Log.txt"         "%dst%"
::copy	"Readme.md"       "%dst%"
::rename	"%dst%\Readme.md" "Readme.txt"

copy	"Languages"	"%dst%\Languages"
copy	"Licences"	"%dst%\Licences"

"C:\Program Files\7-Zip\7z.exe" a "%bin_name%.zip" ".\%dst_root%\*" -mx9
attrib +r "%bin_name%.zip"

:end

endlocal
pause