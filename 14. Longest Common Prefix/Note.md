# 14. Longest Common Prefix

Ideas:
1. Get 1 pattern
2. If no, return ""
    
    but if yes, return the pattern.
3. Check next str in strs, identify whether they are start with pattern or not. 
4. if not, pattern.pop(). If pattern.length () == 0, return "". Do 3 again.
5. if yes, continue until char in pattern are all checked.
6. return pattern