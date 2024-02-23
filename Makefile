# Compilador
CXX = g++
# Opciones de compilación
CXXFLAGS = -Wall -Wextra -std=c++11
# Archivos fuente
SRCS = main.cpp instruccionesPtr.cpp progCuentaAtras.cpp progSuma.cpp progFactorial.cpp mul.cc dup.cc swap.cc jumpif.cc add.cc over.cc push.cc read.cc write.cc
# Archivos de encabezado
HDRS = instruccionesPtr.hpp progCuentaAtras.hpp progSuma.hpp progFactorial.hpp mul.h dup.h swap.h jumpif.h add.h over.h push.h read.h write.h
# Archivos objeto generados
OBJS = $(SRCS:.cpp=.o)
# Nombre del ejecutable
TARGET = programa

# Reglas de construcción
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Regla de construcción para los archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(OBJS) $(TARGET)
