### 15. 3Sum

UNIQUE???

```mermaid
    graph TD;
    A[Get the first number: A] --> |0 - A| B[LEFT]
    B --> C[Get two left]
    C --> D{two exists?}
    D --> |No| C[Get Two Left]
    D --> |Yes| E[save them into vector, them assign a new]
```

<p><b><span style="color:#00F2F1">Alright!</span></b></p>

1. a + b + c = 0 means, at least one of them is nagetive number!
2. find all negative numbers, and try whether they can be represented by two other numbers. 
3. How to avoid duplicate?