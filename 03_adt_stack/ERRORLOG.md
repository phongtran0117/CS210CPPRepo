Sep 15, 2026 — main.cpp:18 error: no member named 'top' in 'Stack'; did you mean 'pop'?
Cause: rewrote Stack.h to use peek() but main.cpp still called the old vector-version top().
Fix: changed both s.top() calls to s.peek().

Sep 15, 2026 — No compiler error. pop() returned the wrong value silently.
Cause: returned data[topIndex] after already decrementing topIndex, so it handed back
the element below the one being popped. Last pop would have read data[-1], out of bounds.
Fix: returned the saved local poppedValue instead.