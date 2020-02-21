all: build run

build:
	mkdir -p build
	cd build && cmake ..
	cd build && make
.PHONY: build

run:
	@build/binary
.PHONY: run

clean:
	@rm -r ./build/
.PHONY: clean
