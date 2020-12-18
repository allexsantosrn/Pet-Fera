RM = rm -rf 

CC=g++ 

INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
LIB_DIR = ./lib
BIN_DIR = ./bin

LIBFLAGS = -lpetfera

CFLAGS	= -Wall -pedantic -std=c++11 
ARCHIVE = ar
PATH_DIR = /usr/local


.PHONY: all init clean debug doxy doc install linux 

linux: init petfera_boys

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/
	@mkdir -p $(LIB_DIR)/

# Linux
petfera_boys: libpetfera.so
	$(CC) $(SRC_DIR)/main.cpp $(CFLAGS) -I$(INC_DIR) -L$(LIB_DIR) $(LIBFLAGS) -o $(BIN_DIR)/$@	

libpetfera.so:
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/funcionario.cpp -I$(INC_DIR) -o $(OBJ_DIR)/funcionario.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/veterinario.cpp -I$(INC_DIR) -o $(OBJ_DIR)/veterinario.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/tratador.cpp -I$(INC_DIR) -o $(OBJ_DIR)/tratador.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/animal.cpp -I$(INC_DIR) -o $(OBJ_DIR)/animal.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/silvestre.cpp -I$(INC_DIR) -o $(OBJ_DIR)/silvestre.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/nativo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/nativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/exotico.cpp -I$(INC_DIR) -o $(OBJ_DIR)/exotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/anfibio.cpp -I$(INC_DIR) -o $(OBJ_DIR)/anfibio.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/mamifero.cpp -I$(INC_DIR) -o $(OBJ_DIR)/mamifero.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/reptil.cpp -I$(INC_DIR) -o $(OBJ_DIR)/reptil.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/ave.cpp -I$(INC_DIR) -o $(OBJ_DIR)/ave.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/menu.cpp -I$(INC_DIR) -o $(OBJ_DIR)/menu.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/mamiferoexotico.cpp -I$(INC_DIR) -o $(OBJ_DIR)/mamiferoexotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/mamiferonativo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/mamiferonativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/avenativa.cpp -I$(INC_DIR) -o $(OBJ_DIR)/avenativa.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/aveexotica.cpp -I$(INC_DIR) -o $(OBJ_DIR)/aveexotica.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/reptilnativo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/reptilnativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/reptilexotico.cpp -I$(INC_DIR) -o $(OBJ_DIR)/reptilexotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/anfibionativo.cpp -I$(INC_DIR) -o $(OBJ_DIR)/anfibionativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/anfibioexotico.cpp -I$(INC_DIR) -o $(OBJ_DIR)/anfibioexotico.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/libpetfera.so $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/tratador.o $(OBJ_DIR)/animal.o $(OBJ_DIR)/silvestre.o $(OBJ_DIR)/nativo.o $(OBJ_DIR)/exotico.o $(OBJ_DIR)/anfibio.o $(OBJ_DIR)/mamifero.o $(OBJ_DIR)/reptil.o $(OBJ_DIR)/ave.o $(OBJ_DIR)/menu.o $(OBJ_DIR)/mamiferoexotico.o $(OBJ_DIR)/mamiferonativo.o $(OBJ_DIR)/avenativa.o $(OBJ_DIR)/aveexotica.o  $(OBJ_DIR)/reptilnativo.o $(OBJ_DIR)/reptilexotico.o $(OBJ_DIR)/anfibionativo.o $(OBJ_DIR)/anfibioexotico.o	
	

install: 
	mkdir -p $(PATH_DIR)/include
	mkdir -p $(PATH_DIR)/lib
	cp $(INC_DIR)/funcionario.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/veterinario.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/tratador.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/animal.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/silvestre.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/nativo.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/exotico.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/anfibio.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/mamifero.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/reptil.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/ave.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/aveexotica.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/avenativa.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/mamiferoexotico.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/mamiferonativo.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/anfibioexotico.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/anfibionativo.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/reptilnativo.hpp $(PATH_DIR)/include/
	cp $(INC_DIR)/reptilexotico.hpp $(PATH_DIR)/include/  
	cp $(INC_DIR)/menu.hpp $(PATH_DIR)/include/
	cp $(LIB_DIR)/libpetfera.so $(PATH_DIR)/lib/
	cp $(LIB_DIR)/libpetfera.so /usr/lib/

uninstall:
	$(RM) $(PATH_DIR)/include/funcionario.hpp
	$(RM) $(PATH_DIR)/include/veterinario.hpp
	$(RM) $(PATH_DIR)/include/tratador.hpp
	$(RM) $(PATH_DIR)/include/animal.hpp
	$(RM) $(PATH_DIR)/include/silvestre.hpp
	$(RM) $(PATH_DIR)/include/nativo.hpp
	$(RM) $(PATH_DIR)/include/exotico.hpp
	$(RM) $(PATH_DIR)/include/anfibio.hpp
	$(RM) $(PATH_DIR)/include/mamifero.hpp
	$(RM) $(PATH_DIR)/include/reptil.hpp
	$(RM) $(PATH_DIR)/include/ave.hpp
	$(RM) $(PATH_DIR)/include/mamiferoexotico.hpp
	$(RM) $(PATH_DIR)/include/mamiferonativo.hpp
	$(RM) $(PATH_DIR)/include/anfibioexotico.hpp
	$(RM) $(PATH_DIR)/include/anfibionativo.hpp
	$(RM) $(PATH_DIR)/include/reptilexotico.hpp
	$(RM) $(PATH_DIR)/include/reptilnativo.hpp
	$(RM) $(PATH_DIR)/include/menu.hpp
	$(RM) $(PATH_DIR)/lib/libpetfera.so
	$(RM) usr/lib/libpetfera.so

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(LIB_DIR)/*