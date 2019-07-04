Créer une nouvelle page
=======================
Le mieux c'est de copier un page existante et de l'utiliser comme template. Dans l'esprit c'est très simple :

Il faut d'abord faire les liens entre les pages déjà écrites et celle ajoutée. Par exemple si on créé une page *nouvellePage.rst*, il faut dans la page parent ajouter (ou modifier selon qu'elle existe déjà) la directive :

.. code-block:: ReST

	.. toctree::
	   :maxdepth: 2
	   :caption: Contents:

	   nouvellePage

*maxdepth* représente le nombre de niveaux qui seront visibles dans la barre latérale (maximum : 2).

