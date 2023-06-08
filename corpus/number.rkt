===
base10
===

1
12
#d1
#d12
-1
-12
#d-1
#d-12

---

(program
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  (number))

===
base16
===

#xa
#xa1
#x-a
#x-a1

---

(program
  (number)
  (number)
  (number)
  (number)
  )

===
base16 without prefix
===

a
-a
ab
-ab

---

(program
  (symbol)
  (symbol)
  (symbol)
  (symbol)
  )

===
rational
===

1/2
-1/2
#xa/2
#e1/1
#xa/#xb
#e1/#i1
1/-2

---

(program
  (number)
  (number)
  (number)
  (number)
  (ERROR)
  (ERROR)
  (symbol)
  )

===
inexact-simple
===

1#.#
1#.##

---

(program
  (number)
  (number)
  )

===
inf & nan
===

inf.0
inf.f
inf.t
nan.0
nan.f
nan.t

---

(program
  (number)
  (number)
  (number)
  (number)
  (number)
  (number)
  )

===
complex
===

1+2i
1/2+3/4i
1.0+3.0e7i

---

(program
  (number)
  (number)
  (number)
  )

===
exact & prefix
===

#e#xa1
#x#ea1
#i#o1
#o#i1

---

(program
  (number)
  (number)
  (number)
  (number)
  )
