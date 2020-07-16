# Shared_lib

- first way

линковка приложения с библиотекой

1)  `gcc -fPIC -Wall -g -c my_lib.c`
2)  `gcc -shared -o libTestLib.so libTestLib.o`
3)  `gcc main_for_lib.c -o test -lTestLib -L.`

- second way

ручная загрузка библиотеки приложением (dlopen/dlsym) 
--> TODO
