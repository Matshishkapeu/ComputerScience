Compiler le projet
==================

C'est la partie un peu pénible. J'ai essayé d'être concis. Tablez sur une vingtaine de minute la première fois pour tout comprendre.

Prerequis
---------
Comme le projet utilise le package python Sphinx, pour génerer le cours, il faut installer quelques trucs...

Installer Python
~~~~~~~~~~~~~~~~
Si ce n'est pas fait, il faut installer python via au choix :

- Le paquet `Anaconda`_ 
- Le paquet `python officiel`_.
- installer sous ubuntu en ligne de commande :

.. code-block:: console

	apt-get install python3
	apt-get install python-pip

Installer Sphinx
~~~~~~~~~~~~~~~~
A partir de la console, installer les paquet de sphinx via pip:

.. code-block:: console

	pip install sphinx
	pip install sphinx_rtd_theme
	pip install sphinx-numfig
	pip install sphinxcontrib-bibtex

Installer Latex
~~~~~~~~~~~~~~~
Pour construire le cours en pdf, il faut aussi installer Latex. La encore, plusieurs possibiltés :

- le paquet MikTex_
- installation en ligne de commande:

.. code-block:: console

	apt-get install texlive
	apt-get install texlive-latex-extra
	apt-get install texlive-lang-french
	apt-get install latexmk

Construire le site html
-----------------------
Pour construire le cours en temps que page web, aller dans le dossier principal et en ligne de commande utiliser le makefile:

.. code-block:: console

	make html

Ca devrait générer un dossier **build/html** qui contient le site. Ouvrir la page *index.html* pour voir le résultat.

**Attention:** Lors de l'ajout de nouvelles pages, il faut parfois effacer le dossier build pour le re-compiler au propre via la commande:

.. code-block:: console

	make clean
	make html

Construire le document pdf via latexpdf
---------------------------------------
Idem pour le pdf avec la commande :

.. code-block:: console

	make latexpdf

Ca devrait générer un dossier **build/latex** qui contient les sources latex et le pdf.

.. _`Anaconda`: https://www.anaconda.com/distribution/
.. _`python officiel` : https://www.python.org/
.. _MikTex : https://miktex.org/download
