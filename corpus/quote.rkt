===
quote
===

'123
`(1 ,2)
#'123
#`123

---

(program
  (quoted (quote) (number))
  (quoted
    (quasiquote)
    (list
      (number)
      (quoted (unquote) (number))))
  (quoted (syntax) (number))
  (quoted (quasisyntax) (number)))

===
unquote
===

,1
,@1
#,1
#,@1

---
(program
  (quoted (unquote) (number))
  (quoted (unquote_splicing) (number))
  (quoted (unsyntax) (number))
  (quoted (unsyntax_splicing) (number)))
