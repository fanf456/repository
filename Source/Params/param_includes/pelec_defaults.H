
// This file is automatically created by parse_pelec_params.py.  To update
// or add runtime parameters, please edit _cpp_parameters and then run
// mk_params.sh

int PeleC::state_interp_order = 1;
int PeleC::lin_limit_state_interp = 1;
int PeleC::state_nghost = 0;
bool PeleC::do_reflux = true;
bool PeleC::do_avg_down = true;
std::string PeleC::init_pltfile;
amrex::Real PeleC::init_pltfile_massfrac_tol = 1e-8;
int PeleC::init_pltfile_coarse_levels = 0;
bool PeleC::dump_old = false;
amrex::Real PeleC::difmag = 0.1;
amrex::Real PeleC::small_pres = 1.e-200;
bool PeleC::do_hydro = true;
bool PeleC::do_mol = false;
bool PeleC::use_hybrid_weno = false;
int PeleC::weno_scheme = 1;
bool PeleC::nscbc_adv = true;
bool PeleC::nscbc_diff = false;
bool PeleC::add_ext_src = false;
amrex::GpuArray<amrex::Real, AMREX_SPACEDIM> PeleC::external_forcing = {0.0};
bool PeleC::add_forcing_src = false;
amrex::Real PeleC::forcing_u0 = 0.0;
amrex::Real PeleC::forcing_v0 = 0.0;
amrex::Real PeleC::forcing_w0 = 0.0;
amrex::Real PeleC::forcing_force = 0.0;
int PeleC::ppm_type = 0;
bool PeleC::ppm_trace_sources = false;
int PeleC::plm_iorder = 4;
int PeleC::mol_iorder = 2;
bool PeleC::use_laxf_flux = false;
bool PeleC::use_flattening = true;
bool PeleC::dual_energy_update_E_from_e = true;
amrex::Real PeleC::dual_energy_eta2 = 1.0e-4;
bool PeleC::allow_negative_energy = true;
bool PeleC::allow_small_energy = true;
std::string PeleC::xl_ext_bc_type;
std::string PeleC::xr_ext_bc_type;
std::string PeleC::yl_ext_bc_type;
std::string PeleC::yr_ext_bc_type;
std::string PeleC::zl_ext_bc_type;
std::string PeleC::zr_ext_bc_type;
bool PeleC::diffuse_temp = false;
bool PeleC::diffuse_enth = false;
bool PeleC::diffuse_spec = false;
bool PeleC::diffuse_vel = false;
bool PeleC::transport_harmonic_mean = true;
bool PeleC::do_isothermal_walls = false;
amrex::GpuArray<amrex::Real, AMREX_SPACEDIM> PeleC::domlo_isothermal_temp = {
  -1.0};
amrex::GpuArray<amrex::Real, AMREX_SPACEDIM> PeleC::domhi_isothermal_temp = {
  -1.0};
bool PeleC::do_les = false;
bool PeleC::use_explicit_filter = false;
amrex::Real PeleC::Cs = 0.0;
amrex::Real PeleC::Cw = 0.0;
amrex::Real PeleC::CI = 0.0;
amrex::Real PeleC::PrT = 1.0;
amrex::Real PeleC::eb_boundary_T = 1.0;
bool PeleC::eb_isothermal = true;
bool PeleC::eb_noslip = true;
std::string PeleC::redistribution_type = "StateRedist";
bool PeleC::eb_clean_massfrac = true;
amrex::Real PeleC::eb_clean_massfrac_threshold = 0.0;
int PeleC::eb_srd_max_order = 0;
int PeleC::eb_weights_type = 2;
bool PeleC::eb_zero_body_state = false;
bool PeleC::eb_problem_state = false;
bool PeleC::do_mms = false;
std::string PeleC::masa_solution_name = "ad_cns_3d_les";
amrex::Real PeleC::fixed_dt = -1.0;
amrex::Real PeleC::initial_dt = -1.0;
amrex::Real PeleC::dt_cutoff = 0.0;
amrex::Real PeleC::max_dt = 1.e200;
amrex::Real PeleC::cfl = 0.8;
amrex::Real PeleC::init_shrink = 1.0;
amrex::Real PeleC::change_max = 1.1;
int PeleC::sdc_iters = 1;
int PeleC::mol_iters = 1;
bool PeleC::do_react = false;
std::string PeleC::chem_integrator = "ReactorNull";
bool PeleC::bndry_func_thread_safe = true;
#ifdef AMREX_DEBUG
bool PeleC::print_energy_diagnostics = true;
#else
bool PeleC::print_energy_diagnostics = false;
#endif
int PeleC::sum_interval = -1;
bool PeleC::track_extrema = true;
std::string PeleC::extrema_spec_name;
amrex::Real PeleC::sum_per = -1.0e0;
bool PeleC::hard_cfl_limit = true;
std::string PeleC::job_name;
std::string PeleC::flame_trac_name;
std::string PeleC::fuel_name;
