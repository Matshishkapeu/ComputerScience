******************************
Installer / Compiler le projet
******************************

C'est la partie un peu pénible. J'ai essayé d'être concis. Tablez sur une vingtaine de minute la première fois pour tout comprendre.

Prerequis
=========
Comme le projet utilise le package python Sphinx, pour génerer le cours, il faut installer quelques trucs : python + latex + paquets additionnels python. Selon l'OS sur lequel vous travaillez, ça peut changer un peu.

Installer Python
^^^^^^^^^^^^^^^^
Le premier truc, c'est d'installer python correctement.

Windows 10
----------
Deux possibilités sous windows 10:

* A la main en installant le paquet `Anaconda`_ puis travailler avec le "Anaconda prompt" pour installer les paquets additionnels des sections suivantes.
* En intallant l'application Ubuntu directement sur windows 10 (voir en section :ref:`Chap:installUbuntuOnWindows`) puis suivre les directives pour Ubuntu de la section suivante.

Ubuntu
------
Installer python sous ubuntu en ligne de commande :

.. code-block:: console

  apt-get update
  apt-get upgrade
  apt-get install python3
  apt-get install python-pip

Installer Sphinx
^^^^^^^^^^^^^^^^
Quelque soit l'OS, à partir de la console (Anaconda prompt sous windows 10 ou bash Ubuntu), installer les paquets de sphinx via pip:

.. code-block:: console

  pip install sphinx
  pip install sphinx-numfig
  pip install sphinxcontrib-bibtex
  pip install sphinx_rtd_theme

.. admonition:: Ajout de package
  
  Lors de l'utilisation de thèmes sphinx, il faudra ajouter des paquets. C'est le cas par exemple du paquet *sphinx_rtd_theme* qui correspond au theme utilisé ici de base. Il faut également ajouter une ligne *import sphinx_rtd_theme* au fichier de configuration *conf.py*

Installer Latex
^^^^^^^^^^^^^^^
Pour construire le cours en pdf, il faut aussi installer Latex. La encore, plusieurs possibiltés :

- le paquet MikTex_ sous windows 10
- installation en ligne de commande via le bash Ubuntu:

.. code-block:: console

  apt-get install texlive
  apt-get install texlive-latex-extra
  apt-get install texlive-lang-french
  apt-get install latexmk

Construire le site html
=======================
Pour construire le cours en temps que page web, aller dans le dossier principal et en ligne de commande utiliser le makefile:

.. code-block:: console

  make html

Ca devrait générer un dossier **build/html** qui contient le site. Ouvrir la page *index.html* pour voir le résultat.

**Attention:** Lors de l'ajout de nouvelles pages, il faut parfois effacer le dossier build pour le re-compiler au propre via la commande:

.. code-block:: console

  make clean
  make html

Construire le document pdf via latexpdf
=======================================
Idem pour le pdf avec la commande :

.. code-block:: console

  make latexpdf

Ca devrait générer un dossier **build/latex** qui contient les sources latex et le pdf.

.. _`Anaconda`: https://www.anaconda.com/distribution/
.. _`python officiel` : https://www.python.org/
.. _MikTex : https://miktex.org/download

.. toctree::
  :maxdepth: 1
  :caption: Contents:

  installUbuntuOnWindows10                