## Reflection Questions
1.What value does topIndex hold immediately after construction, and why does that specific value make isEmpty() return the right answer with no special-casing?

topIndex will hold the -1 value after teh contructor runs. In the array it's from 0-99, which will contain 100 slots. We start at -1 because we want to make sure the top at the start is outside the range so the top is nowhere. On the isEmpty function, we have it as the same too becasue, even if a value is pop off, it will be a stale slot. Also, this helps for not using special casing, becasue when we run the size() function, lets say we do set it at 0, 0 might contain a datapieces which can be a real slot.

2.Walk through push step by step, in words: what happens to data and topIndex, in what order, and why would swapping that order break the stack?

For the push, it first moves the TopIndex up by one, then it stores the value into the data at the TopIndex Slot. Swapping that order would break the stack because if you were to write first, if the slot is at -1, there slot doesn't exist for anything to write on.
3. Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, in Big-O. For each one, justify it by describing what your code actually does, not by naming the general rule for stacks.

4. Exactly what happens in your code when push is called while the stack is full? State what prints (if anything), what gets returned (if anything), and whether topIndex changes. Then say why you chose that behavior.

5. Exactly what happens when pop or peek is called while the stack is empty? Same level of detail as above.

6.Your array is fixed at 100 slots. If a caller needed more room than that, what would have to change in your class to support it, and what would it likely cost in terms of the time complexity you gave in question 3?

7.Without looking anything up: if this stack were built on a linked list instead of an array, name one advantage and one disadvantage that trade-off would bring, based on what you already know about how arrays and pointers behave differently.