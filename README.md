**ORIGINALLY `GOAL.MD`**

I will try to program in C++ with minimal prior knowledge. I have overdue assignments that I have to do, but I'd rather do this than do ***10^15^1000*** boring Edgenuities, ***9 googol*** GA Studies assignments, and ***all*** the Progress Learning assignments for Phys. Sci... This will be interesting to do. Also I know, I should probably start out with C, shit, even Python, hell do it in Visual Basic, but I'd rather see how OOP is versus Non-OOP (memory-oriented) C. This is going to be hell, depending on my patience and how much I feel like reading documentation. Today as of writing this, it is Valentine's Day 2026 (Saturday, 14th of February, 2026, 22:33 NYC, NY/Atlanta:Morrow, GA time).

Edit: This was made on Linux, although if you can, use MinGW on Windows (if that applies to you, or on Mac, just do your own research.) Also, I'm not sure if I should use CMake/Make/Whateverthehellmake or if I should've just left it compiled with g++, so I did the latter.

Edit 2: when you run g++, it should be `g++ main.cpp calculator.cpp -o calculator.{out,exe}` (platform dependent (windows = .exe, linux/macos = .out)` -std=c++23`` `(for std::print and std::println support)`

copy-paste:

  linux:
    
    g++ main.cpp calculator.cpp -o calculator.out -std=c++23
    
  windows:
  
    g++ main.cpp calculator -o calculator.exe -std=c++23 
  or sum like that i havent been on windows in a while
