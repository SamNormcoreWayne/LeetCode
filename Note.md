### Note for Longest Palindromic Substring

1. Manacher's Algorithm:

    * Pattern
    * Adding sharps into characters. abd -> #a#b#d#; 3 -> 7
    * The Pattern is to record the longest palindromic radios! for 7 -> 4.
    * QUESTION: How to get Pattern: define max_length = for every id, the right boundary of the longest palindromic substring as id be its center.  

        a. i < max_length, i = 2*id - j, means i and j are symmetric
        b. P_i = min[P_(2 * id - i), mx - i]

    *   why use min? PalinSubString(i) might be a substring of PalinSubString(id)
