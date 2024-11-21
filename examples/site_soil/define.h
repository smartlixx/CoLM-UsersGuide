! 1. Spatial structure.
#define SinglePoint

! 2. Land subgrid type classification.
#define LULC_IGBP

! 3. Print debug information.
#define CoLMDEBUG
!    Print range of variables.
#define RangeCheck

! 4. MPI parallelization is disabled.
#if (defined SinglePoint)
#undef USEMPI
#endif

! 5. Hydrological process options.
#define vanGenuchten_Mualem_SOIL_MODEL
