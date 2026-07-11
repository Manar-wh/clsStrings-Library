# C++ String Utility Library (`clsStrings`)

A lightweight, robust, and highly optimized C++ class designed for efficient string manipulation and processing. This library is built following strict Object-Oriented Programming (OOP) principles, offering both instance-based property mutations and stateless static utility methods.

> 🎯 **Note:** This library was developed and refined as a reusable component while studying **Course 10** in my programming path, focusing on advanced Object-Oriented Programming (OOP) concepts and clean code architecture.

---

## ✨ Features

The library encapsulates essential string utilities, categorized into:
* **Case Conversion:** Convert character cases globally or specifically for the first letters of words.
* **Whitespace Trimming:** Advanced left, right, and full string trimming.
* **Tokenization & Joining:** Split strings into vectors using custom delimiters and join them back.
* **String Analysis:** Count specific characters, general letters (Capital/Small), words, and vowels.
* **Advanced Manipulation:** Invert entire string cases, reverse word orders, and replace specific terms (case-sensitive or insensitive).

---

## 🛠️ Public API Overview

### 1. Structure & Properties
| Member | Type | Description |
| :--- | :--- | :--- |
| `Value` | Property (`__declspec`) | Gets or sets the internal string value directly. |
| `enWhatToCount` | Enum | Classification for letter counting (`CapitalLetter`, `SmallLetter`, `all`). |

### 2. Available Methods
Every feature is implemented in two flavors: **Static** (for quick, stateless operations) and **Object-based** (mutates the internal object state via `void` methods).

* `Trim()` / `TrimLeft()` / `TrimRight()`
* `ConvertFirstLettersToUpper()` / `ConvertFirstLettersToLower()`
* `ConvertAllLettersToUpper()` / `ConvertAllLettersToLower()`
* `InvertAllLettersCase()`
* `CountLetters(enWhatToCount)`
* `CountSpecificLetter(char, MatchCase)`
* `CountAllVowels()`
* `CountWords()`
* `Split(delimiter)`
* `Join(vector, delimiter)`
* `ReverseWords()`
* `ReplaceWord(StringToReplace, ReplaceTo, MatchCase)`
* `RemovePunctuations()`

---

## 🚀 Usage Example

Here is a quick demonstration of how to integrate and use `clsStrings` in your main application:

```cpp
#include <iostream>
#include "clsStrings.h"

using namespace std;

int main() {
    // --- 1) Object-Oriented Style (State Mutation) ---
    clsStrings Str("   manar alwahedi   ");
    
    Str.Trim();                         // Value becomes: "manar alwahedi"
    Str.ConvertFirstLettersToUpper();   // Value becomes: "Manar Alwahedi"
    Str.ReverseWords();                 // Value becomes: "Alwahedi Manar"
    
    cout << "Processed Value: " << Str.Value << endl;
    cout << "Word Count: " << Str.CountWords() << endl;

    // --- 2) Static Methods Style (Stateless Utilities) ---
    string TestText = "C++ Object Oriented Programming";
    
    // Count only capital letters using the Enum flag
    short capitals = clsStrings::CountLetters(TestText, clsStrings::enWhatToCount::CapitalLetter);
    
    // Replace a specific word dynamically
    string ModifiedText = clsStrings::ReplaceWord(TestText, "Programming", "Mastery");

    cout << "Capital Letters: " << capitals << endl;
    cout << "Modified Text: " << ModifiedText << endl;

    return 0;
}
