Steps to creae mesh 

model created using....

Exported to stl format 
components combined and material groups set using Elmer Grid

Mesh converetd to gmsh format and refinement using that application

History of steps


 28 ElmerGrid 2 2 solarmodel-innercorona_1_2D -2d -autoclean -bulktype 1 140 3 -out innercorona1
  29 ElmerGrid 2 2 solarmodel-innercorona_2_2D -2d -autoclean -bulktype 1 140 2 -out innercorona2
  30 ElmerGrid 2 2 innercorona2 -in innercorona1 -out temp -2d -unite -merge 1.0e-10
  31 ls -l temp
  32 ElmerGrid
  33 ElmerGrid 2 2 innercorona2 -in innercorona1 -out temp -removeintbcs -2d -bulkbound 2 3 2
  34 cd ..\..\
  35 cd ..\proj
  36 ls
  37 cd solar-global1
  38 ls
  39 cd sol4
  40 ElmerGrid 14 2 ic2
  41  ElmerGrid 2 2 solarmodel-chromos_2D -2d -autoclean -bulktype 1 136 1 -out ic2fin
  42  ElmerGrid 2 2 ic2 -2d -autoclean -bulktype 1 136 1 -out ic2fin
  43 ElmerGrid 14 2 ic1
  44 ElmerGrid 14 2 oc
  45  ElmerGrid 2 2 ic1 -2d -autoclean -bulktype 1 139 2 -out ic1fin
  46 ElmerGrid 14 2 oc
  47  ElmerGrid 2 2 oc -2d -autoclean -bulktype 1 114 3 -out ocfin
  48 ElmerGrid
  49 ls
  50 ElmerGrid 2 2 outercorona -in innercorona1 -out temp -2d -unite -merge 1.0e-10
  51 ElmerGrid 2 2 outercorona -in innercorona1 -out temp -2d -unite -merge 1.0e-10
  52 ElmerGrid 2 2 outercorona -in innercorona1 -out temp -2d -unite -merge 1.0e-10
  53 ElmerGrid 2 2 outercorona -in innercorona1 -out temp -2d -unite -merge 1.0e-10
  54 ElmerGrid 2 2 outercorona -in innercorona1 -out temp -2d -unite -merge 1.0e-10
  55 ElmerGrid 2 2 ic2 -in ic1 -out temp -2d -unite -merge 1.0e-10 -removeintbcs...
  56 ElmerGrid 2 2 ic2 -in ic1 -out temp -2d -unite -merge 1.0e-10 -removeintbcs
  57 ElmerGrid
  58 ElmerGrid 2 2 ic2 -in ic1 -out temp -2d -unite -merge 1.0e-10 -removeintbcs -bulkbound 1 2 3
  59  ElmerGrid 2 2 ic1 -2d -autoclean -bulktype 1 139 2 -out ic1fin
  60  ElmerGrid 2 2 ic2 -2d -autoclean -bulktype 1 136 2 -out ic2fin
  61 ElmerGrid 2 2 ic2 -in ic1 -out temp -2d -unite -merge 1.0e-10 -removeintbcs -bulkbound 1 2 3
  62 ElmerGrid 2 2 ic2 -in ic1 -out temp -2d -unite -merge 1.0e-10 -removeintbcs -bulkbound 1 2 3
  63 ElmerGrid 14 2 oc
  64  ElmerGrid 2 2 oc -2d -autoclean -bulktype 1 114 2 -out ocfin
  65 ElmerGrid
  66 ElmerGrid 14 1 oc
  67 ElmerGrid 2 1 ocfin
  68 ElmerGrid 14 4 ocmsh
  69 ElmerGrid 14 4 oc
  70 ElmerGrid 14 2 oc
  71 ElmerGrid 14 1 oc
  72 cd ..\..
  73 ElmerGrid
  74 which ElmerGrid
  75 Mesh2D
  76 cd solar-global1
  77 ElmerGrid 2 2 -in sol2 -out sol2
  78 ElmerGrid 2 2 -in sol3 -out sol3
  79 ls
  80 ElmerGrid 2 2 -in sol3 -out sol4 -relh 0.000001
  81 ls sol3
  82 cd geometry
  83 ls
  84 ElmerGrid 2 2 -in final -out sol4 -relh 0.000001
  85 ElmerGrid 2 2 -in tempff -out sol4 -relh 0.000001
  86 ElmerGrid
  87 ElmerGrid 2 2 final -out sol4 -relh 0.000001
  88 ElmerGrid 2 2 final -out sol4 -relh 0.00000001
  89 ElmerGrid
  90 ElmerGrid 2 2 final -2d -out sol4 -relh 0.00000001
  91 ElmerGrid
  92 ElmerGrid 2 4 final -2d -out sol4 -relh 0.00000001
  93 ls
  94 ElmerGrid
  95 ElmerGrid 14 2 sol4  -out sol4f -relh 0.00000001
  96 ElmerGrid 2 4 final -2d -out sol4 -relh 0.00000001
  97 ElmerGrid 14 2 sol4  -out sol4-m1
  98 ElmerGrid 14 2 sol4-m2  -out sol4-m2
  99 ElmerGrid 14 2 sol4-m3  -out sol4-m3
 100 ElmerGrid 14 2 sol4-m4  -out sol4-m4