CPP = g++ -g -Wall

skip_list: demo_main.o skip_node.o skip_list_public.o skip_list_private.o
	$(CPP) -o skip_list demo_main.o skip_node.o skip_list_public.o skip_list_private.o

demo_main.o:demo_main.cpp
	$(CPP) -c demo_main.cpp

skip_node.o:../src/skip_node.cpp
	$(CPP) -c ../src/skip_node.cpp

skip_list_public.o:../src/skip_list_public.cpp
	$(CPP) -c ../src/skip_list_public.cpp

skip_list_private.o:../src/skip_list_private.cpp
	$(CPP) -c ../src/skip_list_private.cpp

clean:
	rm -f *.o skip_list