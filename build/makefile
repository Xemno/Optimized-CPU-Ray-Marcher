IDIR =../include
CC=gcc
CFLAGS= -O3 -I$(IDIR) 
export F

ODIR=obj
LDIR =../lib

LIBS=-lm


_DEPS = lodepng.h vec3.h mat4.h camera.h utility.h light.h geometry/scene.h geometry/plane.h geometry/sphere.h geometry/box.h geometry/cone.h geometry/octahedron.h geometry/torus.h scene_loader.h geometry/transform.h geometry/mandelbulb.h jsmn.h benchmark/tsc_x86.h benchmark/benchmark.h config.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS)) # e.g.: DEPS = ../include/lodepng.h

_OBJ = raymarcher.o lodepng.o vec3.o mat4.o camera.o utility.o light.o geometry/scene.o geometry/plane.o geometry/sphere.o geometry/box.o geometry/cone.o geometry/octahedron.o geometry/torus.o geometry/transform.o geometry/mandelbulb.o scene_loader.o material.o benchmark.o

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ)) # e.g.: OBJ = obj/lodepng.o

$(ODIR)/%.o: ../src/%.c $(DEPS) # take files in obj/ that end in .o and 
	$(CC) -c -o $@ $< $(F) $(CFLAGS)  

raymarcher: $(OBJ)
	$(CC) -o $@ $^ $(F) $(CFLAGS)  $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f $(ODIR)/geometry/*.o *~ core $(INCDIR)/*~ 
