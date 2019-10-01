src := $(shell ls src/*.c)
tmp := $(subst src/,obj/,$(src))
objs := $(subst .c,.o,$(tmp))
exe := ./executable/exe
obj_p = ./obj


target: $(exe)	

$(exe): $(objs)
	cc $(objs) -o $(exe)

$(objs):$(src)
	cc  -c $(src) 
clean:
	rm *.o
