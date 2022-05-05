target : main.c fun.c header.h
	gcc main.c fun.c -o all.out
run : target
	./all.out
clean :
	rm all.out