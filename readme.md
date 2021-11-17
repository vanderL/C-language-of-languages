# Instalação do Compilador GCC

link para download
https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download

Se ao digitar gcc no prompt retornar uma mensagem que o arquivo não foi encontrado, é porque a instalação não configurou o caminho do compilador na variável de ambiente PATH.

Verifique se a variável de ambiente PATH no Windows contém o caminho mingw \ bin

Caso não. Abra o prompt de comando em modo administrador e digite

```
set PATH=C:\MinGW\bin;%PATH%
```

Certificando se ocorreu tudo certo, digite no prompt:
```
gcc -v
```

## Caso de erro

Caso não der certo o primeiro comando, tente esse (encontrando a váriavel)
```
set path | findstr /I /C:"mingw"
```

Depois verifique novamente:
```
gcc -v
```


