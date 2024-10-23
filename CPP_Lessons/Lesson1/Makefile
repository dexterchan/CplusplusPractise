
# build:
# 	mkdir -p build
# 	cd build
# 	cmake ..
# 	make
.IPONY: clean, build, run

clean:
	rm -Rf build

build: clean
build:
	mkdir -p build
	cd build && cmake -DCMAKE_BUILD_TYPE=Debug ..
	cd build && make

run:
	./build/lesson1_helloworld 