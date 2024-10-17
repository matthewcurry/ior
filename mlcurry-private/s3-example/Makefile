S3_PREFIX:=/aws-s3/install/
LDFLAGS:=-L$(S3_PREFIX)/lib
CPPFLAGS:=-I$(S3_PREFIX)/include -I/aws-s3/aws-c-s3/include
# Generated with: ls /aws-s3/install/lib/*.a | sed -r 's/^.*lib([a-zA-Z0-9-]*).a$/-l\1/g' . Probably requires some reordering to be real.
#LDLIBS=-laws-c-auth -laws-c-cal -laws-c-common -laws-c-compression -laws-c-http -laws-c-io -laws-c-s3 -laws-c-sdkutils -laws-checksums -lcrypto -ls2n -lssl

# This was taken from Julian's initial work on making things build.
LDLIBS=-laws-c-s3  -laws-c-s3 -laws-c-auth -laws-c-cal -laws-c-compression -laws-c-http -laws-c-io -laws-c-sdkutils -laws-c-common -laws-checksums -lcrypto -ls2n -lssl -laws-c-auth -laws-c-cal -laws-c-compression -laws-c-http -laws-c-io -laws-c-sdkutils -laws-c-common -laws-checksums -lcrypto -ls2n -lssl -laws-c-auth -laws-c-cal -laws-c-compression -laws-c-http -laws-c-io -laws-c-sdkutils -laws-c-common -laws-checksums -lcrypto -ls2n -lssl -lm

all: main

main: main.o cli_progress_bar.o s3-cp.o s3-ls.o s3-platform_info.o

clean:
	rm -f *.o main
