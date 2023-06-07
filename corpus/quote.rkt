===
quote
===

'123
`(1 ,2)
#'123
#`123

---

(program
  (quote (quote_tok) (number))
  (quasiquote
    (quasiquote_tok)
    (list
      (number)
      (unquote (unquote_tok) (number))))
  (syntax (syntax_tok) (number))
  (quasisyntax (quasisyntax_tok) (number)))

===
unquote
===

,1
,@1
#,1
#,@1

---
(program
  (unquote (unquote_tok) (number))
  (unquote_splicing (unquote_splicing_tok) (number))
  (unsyntax (unsyntax_tok) (number))
  (unsyntax_splicing (unsyntax_splicing_tok) (number)))
