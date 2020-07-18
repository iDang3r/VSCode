#include <stdio.h>
#include <dlfcn.h>

int main() {

    void* lib_ptr = NULL;
    int (*inc)(int) = NULL;

    lib_ptr = dlopen("libTestLib.so", RTLD_LAZY);

    if (lib_ptr == NULL) {
        printf("Error: %s\n", dlerror());
        return 1;
    }

    inc = dlsym(lib_ptr, "inc");

    int num = 0;
    scanf("%d", &num);
    printf("%d\n", inc(num));

    dlclose(lib_ptr);
    lib_ptr = NULL;

    return 0;
}