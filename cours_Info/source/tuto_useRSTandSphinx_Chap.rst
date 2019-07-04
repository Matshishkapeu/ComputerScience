********************************
Tuto Sphinx et Restructured Text
********************************

J'ai essayé de mettre ici tout ce qui peut servir pour éditer ce cours. On complétera au fur et à mesure en fonction des manques et des besoins.

Sphinx est un package python qui permet de générer des pages Web avec templates (liste de themes ici: https://sphinx-themes.org/) et de fabriquer "automatiquement" un pdf via Latex. Il utilise un fichier de configuration écrit en python (conf.py) et des sources écrites au format Restructured Text (.rst). A l'origine c'est fait pour documenter des codes mais je me dis que ça peut être pas mal pour les cours. A voir...

Pour l'utiliser il faut que la machine soit "prête". Je vous ai donc fait un mini tuto de installation/compilation. Puis un résumé de ce que l'on peut faire avec.

Les documentations officielles peuvent être trouvées via les liens suivants :

- Sphinx en général :  http://www.sphinx-doc.org/en/master/contents.html
- format Restructured Text (.rst) : http://www.sphinx-doc.org/en/master/usage/restructuredtext/index.html

On peut trouver une liste de ressources sur Sphinx aussi sur : http://espe-rtd-reflexpro.u-ga.fr/docs/sandbox2/fr/latest/res_sphinx.html

.. toctree::
  :maxdepth: 1
  :caption: Contents:

  tuto_compilerProjetSphinx
  tuto_creerNouvellePage
  tuto_basiques
   