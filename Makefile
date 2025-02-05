
obj-m += hello_kernel.o
all:
	make -C /lib/modules/5.4.0-205-generic/build M=$(PWD) modules

clean: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
