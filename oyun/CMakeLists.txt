cmake_minimum_required(VERSION 3.25)
project(oyun C)

set(CMAKE_C_STANDARD 11)

add_executable(oyun main.c Taktik.h Taktik.c ATaktik.h ATaktik.c Uretim.h Uretim.c AUretim.h AUretim.c Koloni.h Koloni.c Oyun.h Oyun.c Test.c BUretim.h BUretim.c BTaktik.c BTaktik.h)
