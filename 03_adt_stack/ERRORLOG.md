
# ERRORLOG

## 2026-09-15 — compiler error

**Error text:**
/Users/phongtran/cs210/CS210CPPRepo/03_adt_stack/main.cpp:18:31: error: no member named 'top' in 'Stack'; did you mean 'pop'?
18 |     std::cout << "Top: " << s.peek() << std::endl;
|                               ^~~


**What caused it:**
main.cpp was written on the old interface. 



**How I fixed it:**
change teh call to s.peek(), changing the public interface breaks every file underneath it

## 2026-09-15 — wrong output

got 20 instead of 30, compiled fine but got the wrong result.
was returning data[topIndex] but topIndex already went down. 
fixed by returning poppedValue