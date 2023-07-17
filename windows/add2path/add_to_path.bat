@echo off
 if "%~1"=="" (
    echo No folder path selected.
    pause
    exit /b
)
 echo Selected folder path: %~1
set "new_path=%~1"
set "path=%path%;%new_path%"
setx PATH "%path%"
echo New path added to the system PATH variable.
echo %PATH%
pause