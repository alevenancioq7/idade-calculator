@echo off
echo ===============================
echo    TESTES AUTOMATIZADOS
echo ===============================

echo.
echo Compilando testes...
gcc -o tests\run_tests.exe tests\test_age_calculator.c

echo Executando testes...
tests\run_tests.exe

echo.
pause