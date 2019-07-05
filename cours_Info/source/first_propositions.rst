Propositional Logic
===================

Definition
----------
A *poposition* (also named *assertion*) is a statement that can be **true** or **false**. Here are presented some examples of propositions:

.. code-block:: none

	1 + 1 = 2
	1 + 1 = 3
	the weather is sunny today
	42 is the answer

.. caution:: 

  Following statements are not propositions:
	
  .. code-block:: none

		1 + x = 2
		this sentence is false

Compositions of propositions
----------------------------
If a proposition can be either true (1) or false (0), they can be combined to form new propositions. These new propositions are obtained thanks to six different operators: :math:`\lnot`, :math:`\land`, :math:`\lor`, :math:`\Rightarrow`, :math:`\Leftrightarrow` and :math:`\otimes`.

As example, if :math:`p` and :math:`q` are two propositions, we can build thanks to preceding operators a new compound proposition F also named *propositional formula*:

.. math:: 
  :label: formula

  F = ((p\land q) \lor (\lnot q)) \Rightarrow p

To simplify writing, a priority order is defined:

Negation
~~~~~~~~
This is the only unary operator 

+-----------+-----------------+
| :math:`p` | :math:`\lnot p` |
+===========+=================+
| 0         | 1               |
+-----------+-----------------+
| 1         | 0               |
+-----------+-----------------+

Conjonction
~~~~~~~~~~~

Disjonction
~~~~~~~~~~~

Disjonction
~~~~~~~~~~~
