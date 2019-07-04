Les bases du format ReST
========================

Titres
------
**Les titres** s'écrivent avec des "choses" en dessous. Par exemple:

.. code-block:: ReST

	Titre principal
	===============

	sous-titre
	----------

	sous-sous-titre
	~~~~~~~~~~~~~~~

Caractères gras italique
------------------------
Il est possible d'utiliser les caractères **gras** et *italique* :

.. code-block:: ReST

	**sera affiché en gras**
	*sera affiché en italique*

Liens internet
--------------
Pour créer des **liens internet**, il suffit de mettre un _ derrière le nom du lien (attention si plusieurs mots, encadrer les mots du lien avec \` \`) puis indiquer en bas de page le lien:

.. code-block:: ReST

	exemple de texte avec un lien simple vers Arduino_. Ou alors exemple avec un lien `de plusieurs mots`_.

	.. _Arduino: https://www.arduino.cc/
	.. _`de plusieurs mots`: https://dictionnaire.reverso.net/francais-synonymes/plusieurs+mots

Section de code
---------------
Pour créer une section de **code**:

.. code-block:: ReST

	Section de code en C:

	.. code-block:: C

		int i;
		for(i=0;i<42;i++){
			printf("mais quelle est cette reponse incensé ?");
		}

	Section de code en python:

	.. code-block:: python

		liste = [x for x in range(42)]

La liste des synthaxe reconnue est disponible sur le site Pygments_

.. admonition:: attention
	
	Sauts de ligne a respecter !

Figure/image
------------
Insérer une figure référencé de la manière suivante :

.. code-block:: ReST

	.. _Fig:introduction:arduino:

	.. figure:: ./fig/arduino.jpg

		The arduino UNO electronics plateform that is used in this course.

et faire référence avec :

.. code-block:: ReST

	Dans la figure :ref:`Fig:introduction:arduino` on voit une carte Arduino UNO...

LaTeX
-----
On peut insérer des formules en LaTeX avec :

.. code-block:: ReST

  .. math::

    f:x \to x^2 \frac{x}{42}

mais aussi directement dans le texte via :

.. code-block:: ReST

  facile d'insérer du LaTeX dans du texte : :math:`x^2=42`

Tables
------

Une table ressemble à ça :

.. code-block:: ReST

	+------------+--------+------------+
	| Nom        | prénom | motivation |
	+============+========+============+
	| Menvusa    | Gérard | -          |
	+------------+--------+------------+
	| Meurdesoif | Jean   | +          |
	+------------+--------+------------+
	| Hate       | Tom    | --         |
	+------------+--------+------------+

il est aussi possible d'utiliser cvs-table :

.. code-block:: ReST

	.. csv-table:: Frozen Delights!
	   :header: "Treat", "Quantity", "Description"
	   :widths: 15, 10, 30

	   "Albatross", 2.99, "On a stick!"
	   "Crunchy Frog", 1.49, "If we took the bones out, it wouldn't be
	   crunchy, now would it?"
	   "Gannet Ripple", 1.99, "On a stick!"

ou encore list-table :

.. code-block:: ReST

	.. list-table:: Frozen Delights!
	   :widths: 15 10 30
	   :header-rows: 1

	   * - Treat
	     - Quantity
	     - Description
	   * - Albatross
	     - 2.99
	     - On a stick!
	   * - Crunchy Frog
	     - 1.49
	     - If we took the bones out, it wouldn't be
	       crunchy, now would it?
	   * - Gannet Ripple
	     - 1.99
	     - On a stick!

Référence vers une autre section
--------------------------------
Pour faire référence à une autre section il faut ajouter la définition de la réference avant le titre de la section :

.. code-block:: ReST

	.. _Sec:nomReference:

	Titre avec référence
	--------------------

Pour faire appel a la référence dans le texte :


.. code-block:: ReST

	Renvoyer vers la section :ref:`Sec:nomReference`

Les listes a puce
-----------------
Très simple sur cet exemple:

.. code-block:: ReST

	voici une liste (attention au saut de ligne qui suit):

	* menthe
	* sucre roux
	* citrons verts
	* rhum
		* havana club anejo (3 ans ou plus)
		* a defaut havan club
		* a defaut bacardi
		* a defaut arreter tout
	* glaçon
	* eau pétillante
	* verre (ou bock à bière)
	* paille (sans plastique)

	voici une liste numérotée

	1. prendre un verre
	2. mettre le jus d'un demi citron vert
	3. ajouter 6 feuilles de menthe et une grosse cuillère de sucre roux
	4. ajouter mettre 2 à 5 cl de rhum
	5. ajouter de la glace pilé
	6. compléter avec de l'eau pétillante
	7. ajouter une paille et bien mélanger

Références bibliographique
--------------------------

1. Compléter le fichier *Biblio.bib* avec la référence souhaitée.
2. add in the text the reference name:

.. code-block:: ReST

	Ceci peut être trouvé dans :cite:`name`

Ajouter des paragraphes spécifiques
-----------------------------------
Il est possible d'ajouter des paragraphes particulier comme un avertissement par exemple :

.. code-block:: ReST

	.. admonition:: je vous préviens

		Ceci est un avertissement !

La liste des avertissements possibles sont : admonition, caution, danger, error, hint, important, note, tip, warning.

Utilisation de sublimeText
==========================

Il est possible d'utiliser `sublimeText`_ pour faciliter l'écriture des fichier au format .rst via l'utilisation du paquet `sublime-rst-completion`_ 

.. _sublimeText: https://www.sublimetext.com/
.. _sublime-rst-completion: https://github.com/mgaitan/sublime-rst-completion 
.. _Pygments: http://pygments.org/languages/