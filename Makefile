
all: 00-it-compiles 01-angular 02-pineapple 03-add 04-count1 05-count2 06-greeter 07-hello 08-memory

01-angular: 01-angular.c
	gcc $< -o $@

02-pineapple: 02-pineapple.c
	gcc $< -o $@

03-add: 03-add.c
	gcc $< -o $@

04-count1: 04-count1.c
	gcc $< -o $@

05-count2: 05-count2.c
	gcc $< -o $@

06-greeter: 06-greeter.c
	gcc $< -o $@

07-hello: 07-hello.c
	gcc $< -o $@

08-memory: 08-memory.c
	gcc $< -o $@

clean:
	rm -f 00-it-compiles 01-angular 02-pineapple 03-add 04-count1 05-count2 06-greeter 07-hello 08-memory
