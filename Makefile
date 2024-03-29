# C/C++ compiler
CXX=g++

# C++ files
CPP_SRC=parmes.cpp input.cpp output.cpp tasksys.cpp

# ISPC files
ISPC_SRC=parmes.ispc partition.ispc condet.ispc forces.ispc dynamics.ispc shapes.ispc obstacles.ispc

# ISPC targets
ISPC_TARGETS=sse2,sse4,avx

# Python paths
PYTHONINC=-I/usr/include/python2.7
PYTHONLIB=-L/usr/lib -lpython2.7

# Program name
EXE=parmes

# Floating point type
REAL=float

# Debug version
DEBUG=no

# Do the rest
include common.mk
