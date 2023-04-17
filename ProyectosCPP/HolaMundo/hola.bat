@echo off
setlocal

set "EXE=%~n0.exe"

if not exist "%EXE%" (
  echo El archivo %EXE% no existe.
  pause
  exit /b 1
)

"%EXE%"
set "EXIT_CODE=%errorlevel%"

echo El comando %EXE% ha finalizado con código de salida %EXIT_CODE%.

pause
exit /b %EXIT_CODE%

