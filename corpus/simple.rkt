===
boolean
===

#t
#f
#true
#false

---
(program
  (boolean)
  (boolean)
  (boolean)
  (boolean))

===
character
===

#\newline
#\n
#\u3BB
#\λ

---
(program
  (character)
  (character)
  (character)
  (character))

===
symbol
===

Apple
Ap#ple
Ap ple
Ap| |ple
Ap\ ple
#%Apple
123app
app123app123
123app123
中文
a
z

---
(program
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  (symbol))

===
keyword
===

#:apple
#:###abc##123123
#:123123

---

(program
  (keyword)
  (keyword)
  (keyword))
