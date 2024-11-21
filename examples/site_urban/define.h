! 1. Spatial structure.
#define SinglePoint

! 2. Land subgrid type classification.
#define LULC_IGBP

! 3. 3D Urban model.
#define URBAN_MODEL

! 4. Print debug information.
#define CoLMDEBUG
!    Print range of variables.
#define RangeCheck

! 5. MPI parallelization is disabled.
#if (defined SinglePoint)
#undef USEMPI
#endif

! 6. Hydrological process options.
#define Campbell_SOIL_MODEL
