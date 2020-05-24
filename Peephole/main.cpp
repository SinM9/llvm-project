#include <iostream>
#include <cstdint>
#include <chrono>

int main(){
	std::uint64_t sub = 0;
	for (std::uint64_t i = 0; i < 10'000'000'000; ++i){
		sub -= 0;
		sub -= 0;
		sub -= 0;
		sub -= 0;
	}
	return 0;
}
