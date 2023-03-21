/* Generated code for Python module 'alive_progress.core.progress'
 * created by Nuitka version 1.5.3
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_alive_progress$core$progress" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_alive_progress$core$progress;
PyDictObject *moduledict_alive_progress$core$progress;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[241];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[241];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("alive_progress.core.progress"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 241; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_alive_progress$core$progress(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 241; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_208c8b4e44d67c0dad0456fa54bb5483;
static PyCodeObject *codeobj_424490a95e5f8d21758281fe144d93f2;
static PyCodeObject *codeobj_f82e97bebc62ad80b5aa1d739f97d697;
static PyCodeObject *codeobj_cd08c996ba1d23dfc77e2db076ad0e2b;
static PyCodeObject *codeobj_0e976e23436f2b3c2f41eaac1e31a9d3;
static PyCodeObject *codeobj_909dbbe0e817d15c2f905328985ce8b7;
static PyCodeObject *codeobj_30e87508e86c183ac7c46a40b09e6d17;
static PyCodeObject *codeobj_1cc2eb90fb7ad17e35db9eddfce4bacb;
static PyCodeObject *codeobj_ac68c784d86e341fed01f6ec10e2f273;
static PyCodeObject *codeobj_937abcb7e384345aecb5a1255671217f;
static PyCodeObject *codeobj_b3ca88d739a0d2d089d3ac29aaaba58d;
static PyCodeObject *codeobj_246954643886585f00dcfc365b8d0bdf;
static PyCodeObject *codeobj_b0d75114e80205ebcc799db9d5d695ba;
static PyCodeObject *codeobj_28ba0345ed1bfa2b8cad8fe467c6afc9;
static PyCodeObject *codeobj_2f0268cb7eb246f60f3ab83b02e1c499;
static PyCodeObject *codeobj_51c0e7f267aabe842960a96b65c554e5;
static PyCodeObject *codeobj_8a021f24cf742770bc7e561745b52a13;
static PyCodeObject *codeobj_8f0a0c08a68eee0b5c65a33055565ee2;
static PyCodeObject *codeobj_a15278d694d70f8c5c3bd5dc11e40b2f;
static PyCodeObject *codeobj_64b6045eef313df5e09698aa242578ae;
static PyCodeObject *codeobj_7846c8876b7382d4fe0b1fe601d93e04;
static PyCodeObject *codeobj_167590a21031152e523238bbe4dd29d3;
static PyCodeObject *codeobj_dbcb1f4149cb2483f6486c0697555fe2;
static PyCodeObject *codeobj_41b65bd192e6a5d1560731bbce836813;
static PyCodeObject *codeobj_fcc3c77b47123adcc030d5c350e4a4c0;
static PyCodeObject *codeobj_8921dd8bb1d829882d265940d988a261;
static PyCodeObject *codeobj_f3facf3172c58af7362fa40469fec4e5;
static PyCodeObject *codeobj_6d7a2318bc0312ce717c0dc0c1ec23e8;
static PyCodeObject *codeobj_4c2708df6541adac9bf2ff7e281e9932;
static PyCodeObject *codeobj_ccd670ea3ccb0563131decf88aa74bd7;
static PyCodeObject *codeobj_87b9944f884500bb1949a3bf5628e351;
static PyCodeObject *codeobj_3903c7266ada5fb289b43fe221177cd0;
static PyCodeObject *codeobj_b67a54e11565d626dd332511cb21f1ab;
static PyCodeObject *codeobj_5d3262c327381e6d1cb059703214c058;
static PyCodeObject *codeobj_0e617336b7a52e0b9b920adaf818556c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[205]); CHECK_OBJECT(module_filename_obj);
    codeobj_208c8b4e44d67c0dad0456fa54bb5483 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[29], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_424490a95e5f8d21758281fe144d93f2 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[29], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_f82e97bebc62ad80b5aa1d739f97d697 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[207], mod_consts[207], NULL, NULL, 0, 0, 0);
    codeobj_cd08c996ba1d23dfc77e2db076ad0e2b = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[208], NULL, 2, 2, 0);
    codeobj_0e976e23436f2b3c2f41eaac1e31a9d3 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[209], NULL, 1, 0, 0);
    codeobj_909dbbe0e817d15c2f905328985ce8b7 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[209], NULL, 1, 0, 0);
    codeobj_30e87508e86c183ac7c46a40b09e6d17 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[210], NULL, 3, 0, 0);
    codeobj_1cc2eb90fb7ad17e35db9eddfce4bacb = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[211], NULL, 1, 0, 0);
    codeobj_ac68c784d86e341fed01f6ec10e2f273 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[212], NULL, 0, 0, 0);
    codeobj_937abcb7e384345aecb5a1255671217f = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[213], NULL, 1, 0, 0);
    codeobj_b3ca88d739a0d2d089d3ac29aaaba58d = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[214], NULL, 1, 0, 0);
    codeobj_246954643886585f00dcfc365b8d0bdf = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[215], NULL, 1, 0, 0);
    codeobj_b0d75114e80205ebcc799db9d5d695ba = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[216], NULL, 1, 1, 0);
    codeobj_28ba0345ed1bfa2b8cad8fe467c6afc9 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[217], NULL, 2, 1, 0);
    codeobj_2f0268cb7eb246f60f3ab83b02e1c499 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[218], mod_consts[219], 1, 0, 0);
    codeobj_51c0e7f267aabe842960a96b65c554e5 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[220], mod_consts[221], 1, 0, 0);
    codeobj_8a021f24cf742770bc7e561745b52a13 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[21], mod_consts[222], mod_consts[221], 1, 0, 0);
    codeobj_8f0a0c08a68eee0b5c65a33055565ee2 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[46], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_a15278d694d70f8c5c3bd5dc11e40b2f = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_64b6045eef313df5e09698aa242578ae = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[85], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_7846c8876b7382d4fe0b1fe601d93e04 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[85], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_167590a21031152e523238bbe4dd29d3 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[85], mod_consts[223], mod_consts[223], 0, 0, 0);
    codeobj_dbcb1f4149cb2483f6486c0697555fe2 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[87], mod_consts[87], mod_consts[224], mod_consts[225], 0, 0, 0);
    codeobj_41b65bd192e6a5d1560731bbce836813 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[87], mod_consts[87], mod_consts[226], mod_consts[227], 0, 0, 0);
    codeobj_fcc3c77b47123adcc030d5c350e4a4c0 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[64], mod_consts[64], mod_consts[228], mod_consts[229], 0, 0, 0);
    codeobj_8921dd8bb1d829882d265940d988a261 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[11], mod_consts[230], mod_consts[231], 1, 0, 0);
    codeobj_f3facf3172c58af7362fa40469fec4e5 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[17], mod_consts[17], mod_consts[232], mod_consts[206], 1, 0, 0);
    codeobj_6d7a2318bc0312ce717c0dc0c1ec23e8 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[25], mod_consts[233], mod_consts[234], 1, 0, 0);
    codeobj_4c2708df6541adac9bf2ff7e281e9932 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[75], mod_consts[75], mod_consts[235], mod_consts[236], 0, 0, 0);
    codeobj_ccd670ea3ccb0563131decf88aa74bd7 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[75], mod_consts[75], mod_consts[206], mod_consts[206], 0, 0, 0);
    codeobj_87b9944f884500bb1949a3bf5628e351 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[237], mod_consts[238], 0, 0, 0);
    codeobj_3903c7266ada5fb289b43fe221177cd0 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[27], mod_consts[239], mod_consts[240], 0, 0, 0);
    codeobj_b67a54e11565d626dd332511cb21f1ab = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_NOFREE, mod_consts[83], mod_consts[83], NULL, NULL, 0, 0, 0);
    codeobj_5d3262c327381e6d1cb059703214c058 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[223], mod_consts[223], 0, 0, 0);
    codeobj_0e617336b7a52e0b9b920adaf818556c = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[223], mod_consts[223], 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__10___iter__();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__11___call__();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__1_alive_bar(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__11_stats(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__12_stats(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__13_stats_end(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__14_elapsed(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__15_elapsed_end(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__16_update_hook(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__17_update_hook(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__18_monitor(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__19_monitor_end(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__1_run(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__20_update_hook();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__21_monitor(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__22_monitor_end(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__23_monitor(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__2_alive_repr(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__3_set_text(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__4_bar_handle(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__5_bar_handle(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__6_start_monitoring(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__7_stop_monitoring(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__8_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__9_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__3___call__();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__4__create_bars();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__5__create_spinner_player();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__6__render_title();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__7___noop();


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__8_alive_it(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__9___init__();


// The module function definitions.
static PyObject *impl_alive_progress$core$progress$$$function__1_alive_bar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_total = python_pars[0];
    PyObject *par_calibrate = python_pars[1];
    PyObject *par_options = python_pars[2];
    PyObject *var_config = NULL;
    struct Nuitka_FrameObject *frame_b0d75114e80205ebcc799db9d5d695ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0d75114e80205ebcc799db9d5d695ba = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0d75114e80205ebcc799db9d5d695ba)) {
        Py_XDECREF(cache_frame_b0d75114e80205ebcc799db9d5d695ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0d75114e80205ebcc799db9d5d695ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0d75114e80205ebcc799db9d5d695ba = MAKE_FUNCTION_FRAME(codeobj_b0d75114e80205ebcc799db9d5d695ba, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0d75114e80205ebcc799db9d5d695ba->m_type_description == NULL);
    frame_b0d75114e80205ebcc799db9d5d695ba = cache_frame_b0d75114e80205ebcc799db9d5d695ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0d75114e80205ebcc799db9d5d695ba);
    assert(Py_REFCNT(frame_b0d75114e80205ebcc799db9d5d695ba) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_options);
        tmp_dircall_arg2_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__3_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_arg_value_0_1 = var_config;
        CHECK_OBJECT(par_total);
        tmp_kw_call_arg_value_1_1 = par_total;
        CHECK_OBJECT(par_calibrate);
        tmp_kw_call_dict_value_0_1 = par_calibrate;
        frame_b0d75114e80205ebcc799db9d5d695ba->m_frame.f_lineno = 94;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0d75114e80205ebcc799db9d5d695ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0d75114e80205ebcc799db9d5d695ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0d75114e80205ebcc799db9d5d695ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0d75114e80205ebcc799db9d5d695ba,
        type_description_1,
        par_total,
        par_calibrate,
        par_options,
        var_config
    );


    // Release cached frame if used for exception.
    if (frame_b0d75114e80205ebcc799db9d5d695ba == cache_frame_b0d75114e80205ebcc799db9d5d695ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0d75114e80205ebcc799db9d5d695ba);
        cache_frame_b0d75114e80205ebcc799db9d5d695ba = NULL;
    }

    assertFrameObject(frame_b0d75114e80205ebcc799db9d5d695ba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_config);
    Py_DECREF(var_config);
    var_config = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_config);
    var_config = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    CHECK_OBJECT(par_calibrate);
    Py_DECREF(par_calibrate);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    CHECK_OBJECT(par_calibrate);
    Py_DECREF(par_calibrate);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_config = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_total = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_calibrate = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par__cond = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par__cond;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_calibrate;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_config;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_total;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_GENERATOR_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    par_total = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_config);
    Py_DECREF(par_config);
    CHECK_OBJECT(par_calibrate);
    Py_DECREF(par_calibrate);
    CHECK_OBJECT(par__cond);
    Py_DECREF(par__cond);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar_locals {
    struct Nuitka_CellObject *var_run;
    struct Nuitka_CellObject *var_alive_repr;
    struct Nuitka_CellObject *var_set_text;
    struct Nuitka_CellObject *var_bar_handle;
    struct Nuitka_CellObject *var_start_monitoring;
    struct Nuitka_CellObject *var_stop_monitoring;
    PyObject *var_logic_total;
    struct Nuitka_CellObject *var_current;
    struct Nuitka_CellObject *var_rate_spec;
    PyObject *var_factor;
    PyObject *var_header;
    struct Nuitka_CellObject *var_title;
    struct Nuitka_CellObject *var_fps;
    struct Nuitka_CellObject *var_bar;
    struct Nuitka_CellObject *var_bar_repr;
    struct Nuitka_CellObject *var_thread;
    struct Nuitka_CellObject *var_event_renderer;
    struct Nuitka_CellObject *var_cond_refresh;
    struct Nuitka_CellObject *var_term;
    struct Nuitka_CellObject *var_hook_manager;
    PyObject *var_pause_monitoring;
    struct Nuitka_CellObject *var_gen_eta;
    struct Nuitka_CellObject *var_stats;
    PyObject *var_stats_end;
    struct Nuitka_CellObject *var_elapsed;
    PyObject *var_elapsed_end;
    struct Nuitka_CellObject *var_update_hook;
    struct Nuitka_CellObject *var_monitor;
    PyObject *var_monitor_end;
    struct Nuitka_CellObject *var_monitor_original;
    PyObject *var_local_copy;
    PyObject *tmp_assign_unpack_1__assign_source;
    PyObject *tmp_assign_unpack_2__assign_source;
    PyObject *tmp_assign_unpack_3__assign_source;
    PyObject *tmp_tuple_unpack_10__element_1;
    PyObject *tmp_tuple_unpack_10__element_2;
    PyObject *tmp_tuple_unpack_10__source_iter;
    PyObject *tmp_tuple_unpack_11__element_1;
    PyObject *tmp_tuple_unpack_11__element_2;
    PyObject *tmp_tuple_unpack_11__source_iter;
    PyObject *tmp_tuple_unpack_12__element_1;
    PyObject *tmp_tuple_unpack_12__element_2;
    PyObject *tmp_tuple_unpack_12__element_3;
    PyObject *tmp_tuple_unpack_12__element_4;
    PyObject *tmp_tuple_unpack_12__source_iter;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__element_3;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__source_iter;
    PyObject *tmp_tuple_unpack_4__element_1;
    PyObject *tmp_tuple_unpack_4__element_2;
    PyObject *tmp_tuple_unpack_4__element_3;
    PyObject *tmp_tuple_unpack_4__source_iter;
    PyObject *tmp_tuple_unpack_5__element_1;
    PyObject *tmp_tuple_unpack_5__element_2;
    PyObject *tmp_tuple_unpack_5__source_iter;
    PyObject *tmp_tuple_unpack_6__element_1;
    PyObject *tmp_tuple_unpack_6__element_2;
    PyObject *tmp_tuple_unpack_6__source_iter;
    PyObject *tmp_tuple_unpack_7__element_1;
    PyObject *tmp_tuple_unpack_7__element_2;
    PyObject *tmp_tuple_unpack_7__element_3;
    PyObject *tmp_tuple_unpack_7__element_4;
    PyObject *tmp_tuple_unpack_7__source_iter;
    PyObject *tmp_tuple_unpack_8__element_1;
    PyObject *tmp_tuple_unpack_8__element_2;
    PyObject *tmp_tuple_unpack_8__element_3;
    PyObject *tmp_tuple_unpack_8__element_4;
    PyObject *tmp_tuple_unpack_8__source_iter;
    PyObject *tmp_tuple_unpack_9__element_1;
    PyObject *tmp_tuple_unpack_9__element_2;
    PyObject *tmp_tuple_unpack_9__element_3;
    PyObject *tmp_tuple_unpack_9__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    int exception_keeper_lineno_21;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    int exception_keeper_lineno_29;
};

static PyObject *alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar_locals *generator_heap = (struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_run = Nuitka_Cell_Empty();
    generator_heap->var_alive_repr = Nuitka_Cell_Empty();
    generator_heap->var_set_text = Nuitka_Cell_Empty();
    generator_heap->var_bar_handle = Nuitka_Cell_Empty();
    generator_heap->var_start_monitoring = Nuitka_Cell_Empty();
    generator_heap->var_stop_monitoring = Nuitka_Cell_Empty();
    generator_heap->var_logic_total = NULL;
    generator_heap->var_current = Nuitka_Cell_Empty();
    generator_heap->var_rate_spec = Nuitka_Cell_Empty();
    generator_heap->var_factor = NULL;
    generator_heap->var_header = NULL;
    generator_heap->var_title = Nuitka_Cell_Empty();
    generator_heap->var_fps = Nuitka_Cell_Empty();
    generator_heap->var_bar = Nuitka_Cell_Empty();
    generator_heap->var_bar_repr = Nuitka_Cell_Empty();
    generator_heap->var_thread = Nuitka_Cell_Empty();
    generator_heap->var_event_renderer = Nuitka_Cell_Empty();
    generator_heap->var_cond_refresh = Nuitka_Cell_Empty();
    generator_heap->var_term = Nuitka_Cell_Empty();
    generator_heap->var_hook_manager = Nuitka_Cell_Empty();
    generator_heap->var_pause_monitoring = NULL;
    generator_heap->var_gen_eta = Nuitka_Cell_Empty();
    generator_heap->var_stats = Nuitka_Cell_Empty();
    generator_heap->var_stats_end = NULL;
    generator_heap->var_elapsed = Nuitka_Cell_Empty();
    generator_heap->var_elapsed_end = NULL;
    generator_heap->var_update_hook = Nuitka_Cell_Empty();
    generator_heap->var_monitor = Nuitka_Cell_Empty();
    generator_heap->var_monitor_end = NULL;
    generator_heap->var_monitor_original = Nuitka_Cell_Empty();
    generator_heap->var_local_copy = NULL;
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    generator_heap->tmp_assign_unpack_3__assign_source = NULL;
    generator_heap->tmp_tuple_unpack_10__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_10__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_10__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_12__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_12__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_12__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_12__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_12__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_4__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_7__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_7__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_8__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_8__element_4 = NULL;
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_9__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_9__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_9__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_9__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_cd08c996ba1d23dfc77e2db076ad0e2b, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 102;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[6];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 104;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_1;
            }

            tmp_type_arg_1 = Nuitka_Cell_GET(generator->m_closure[3]);
            tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 104;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 104;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 104;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 104;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 104;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[3]);
            PyCell_SET(generator->m_closure[3], tmp_assign_source_1);
            Py_INCREF(tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = generator_heap->var_alive_repr;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = generator_heap->var_cond_refresh;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = generator_heap->var_event_renderer;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = generator_heap->var_fps;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = generator_heap->var_run;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = generator_heap->var_thread;
        Py_INCREF(tmp_closure_1[5]);

        tmp_assign_source_2 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__1_run(tmp_closure_1);

        assert(Nuitka_Cell_GET(generator_heap->var_run) == NULL);
        PyCell_SET(generator_heap->var_run, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_2[9];
        tmp_defaults_1 = mod_consts[13];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_2[0] = generator_heap->var_bar_repr;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = generator_heap->var_cond_refresh;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = generator_heap->var_current;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = generator_heap->var_elapsed;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = generator_heap->var_monitor;
        Py_INCREF(tmp_closure_2[4]);
        tmp_closure_2[5] = generator_heap->var_run;
        Py_INCREF(tmp_closure_2[5]);
        tmp_closure_2[6] = generator_heap->var_stats;
        Py_INCREF(tmp_closure_2[6]);
        tmp_closure_2[7] = generator_heap->var_term;
        Py_INCREF(tmp_closure_2[7]);
        tmp_closure_2[8] = generator_heap->var_title;
        Py_INCREF(tmp_closure_2[8]);

        tmp_assign_source_3 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__2_alive_repr(tmp_defaults_1, tmp_closure_2);

        assert(Nuitka_Cell_GET(generator_heap->var_alive_repr) == NULL);
        PyCell_SET(generator_heap->var_alive_repr, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_alive_repr));
        tmp_assattr_value_1 = Nuitka_Cell_GET(generator_heap->var_alive_repr);
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_3[1];

        tmp_closure_3[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_3[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__3_set_text(tmp_closure_3);

        assert(Nuitka_Cell_GET(generator_heap->var_set_text) == NULL);
        PyCell_SET(generator_heap->var_set_text, tmp_assign_source_4);

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_4[3];

        tmp_closure_4[0] = generator_heap->var_hook_manager;
        Py_INCREF(tmp_closure_4[0]);
        tmp_closure_4[1] = generator_heap->var_run;
        Py_INCREF(tmp_closure_4[1]);
        tmp_closure_4[2] = generator_heap->var_update_hook;
        Py_INCREF(tmp_closure_4[2]);

        tmp_assign_source_5 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__4_bar_handle(tmp_closure_4);

        assert(Nuitka_Cell_GET(generator_heap->var_bar_handle) == NULL);
        PyCell_SET(generator_heap->var_bar_handle, tmp_assign_source_5);

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_2;
        struct Nuitka_CellObject *tmp_closure_5[3];
        tmp_defaults_2 = mod_consts[23];
        Py_INCREF(tmp_defaults_2);

        tmp_closure_5[0] = generator_heap->var_hook_manager;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = generator_heap->var_run;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = generator_heap->var_update_hook;
        Py_INCREF(tmp_closure_5[2]);

        tmp_assign_source_6 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__5_bar_handle(tmp_defaults_2, tmp_closure_5);

        assert(Nuitka_Cell_GET(generator_heap->var_bar_handle) == NULL);
        PyCell_SET(generator_heap->var_bar_handle, tmp_assign_source_6);

    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_3;
        struct Nuitka_CellObject *tmp_closure_6[7];
        tmp_defaults_3 = mod_consts[24];
        Py_INCREF(tmp_defaults_3);

        tmp_closure_6[0] = generator_heap->var_bar;
        Py_INCREF(tmp_closure_6[0]);
        tmp_closure_6[1] = generator_heap->var_bar_handle;
        Py_INCREF(tmp_closure_6[1]);
        tmp_closure_6[2] = generator_heap->var_event_renderer;
        Py_INCREF(tmp_closure_6[2]);
        tmp_closure_6[3] = generator_heap->var_hook_manager;
        Py_INCREF(tmp_closure_6[3]);
        tmp_closure_6[4] = generator_heap->var_run;
        Py_INCREF(tmp_closure_6[4]);
        tmp_closure_6[5] = generator_heap->var_set_text;
        Py_INCREF(tmp_closure_6[5]);
        tmp_closure_6[6] = generator_heap->var_term;
        Py_INCREF(tmp_closure_6[6]);

        tmp_assign_source_7 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__6_start_monitoring(tmp_defaults_3, tmp_closure_6);

        assert(Nuitka_Cell_GET(generator_heap->var_start_monitoring) == NULL);
        PyCell_SET(generator_heap->var_start_monitoring, tmp_assign_source_7);

    }
    {
        PyObject *tmp_assign_source_8;
        struct Nuitka_CellObject *tmp_closure_7[4];

        tmp_closure_7[0] = generator_heap->var_bar;
        Py_INCREF(tmp_closure_7[0]);
        tmp_closure_7[1] = generator_heap->var_hook_manager;
        Py_INCREF(tmp_closure_7[1]);
        tmp_closure_7[2] = generator_heap->var_run;
        Py_INCREF(tmp_closure_7[2]);
        tmp_closure_7[3] = generator_heap->var_term;
        Py_INCREF(tmp_closure_7[3]);

        tmp_assign_source_8 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__7_stop_monitoring(tmp_closure_7);

        assert(Nuitka_Cell_GET(generator_heap->var_stop_monitoring) == NULL);
        PyCell_SET(generator_heap->var_stop_monitoring, tmp_assign_source_8);

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(generator->m_closure[3]);
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            struct Nuitka_CellObject *tmp_closure_8[1];
            PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_2);

            tmp_closure_8[0] = generator_heap->var_run;
            Py_INCREF(tmp_closure_8[0]);

            tmp_tuple_element_2 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__8_lambda(tmp_closure_8);

            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_2);
        }
        tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_9 == NULL));
        assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 156;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 156;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 156;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 156;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = generator_heap->tmp_tuple_unpack_1__element_1;
        assert(generator_heap->var_logic_total == NULL);
        Py_INCREF(tmp_assign_source_12);
        generator_heap->var_logic_total = tmp_assign_source_12;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = generator_heap->tmp_tuple_unpack_1__element_2;
        assert(Nuitka_Cell_GET(generator_heap->var_current) == NULL);
        Py_INCREF(tmp_assign_source_13);
        PyCell_SET(generator_heap->var_current, tmp_assign_source_13);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[32];
        tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_14 == NULL));
        assert(generator_heap->tmp_tuple_unpack_2__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 157;
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_tuple_unpack_2__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 157;
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_tuple_unpack_2__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 157;
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_tuple_unpack_2__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_2__element_3 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 157;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[33];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 157;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_3);
    generator_heap->tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_18 = generator_heap->tmp_tuple_unpack_2__element_1;
        assert(Nuitka_Cell_GET(generator_heap->var_rate_spec) == NULL);
        Py_INCREF(tmp_assign_source_18);
        PyCell_SET(generator_heap->var_rate_spec, tmp_assign_source_18);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_19 = generator_heap->tmp_tuple_unpack_2__element_2;
        assert(generator_heap->var_factor == NULL);
        Py_INCREF(tmp_assign_source_19);
        generator_heap->var_factor = tmp_assign_source_19;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_3);
        tmp_assign_source_20 = generator_heap->tmp_tuple_unpack_2__element_3;
        assert(generator_heap->var_header == NULL);
        Py_INCREF(tmp_assign_source_20);
        generator_heap->var_header = tmp_assign_source_20;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_3);
    generator_heap->tmp_tuple_unpack_2__element_3 = NULL;

    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[34];
        tmp_iter_arg_3 = MAKE_TUPLE_EMPTY(2);
        {
            struct Nuitka_CellObject *tmp_closure_9[1];
            PyTuple_SET_ITEM0(tmp_iter_arg_3, 0, tmp_tuple_element_3);

            tmp_closure_9[0] = generator_heap->var_run;
            Py_INCREF(tmp_closure_9[0]);

            tmp_tuple_element_3 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__9_lambda(tmp_closure_9);

            PyTuple_SET_ITEM(tmp_iter_arg_3, 1, tmp_tuple_element_3);
        }
        tmp_assign_source_21 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_21 == NULL));
        assert(generator_heap->tmp_tuple_unpack_3__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_6, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_7;
        }
        assert(generator_heap->tmp_tuple_unpack_3__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_7, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_7;
        }
        assert(generator_heap->tmp_tuple_unpack_3__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = generator_heap->tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 159;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 159;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
        tmp_assign_source_24 = generator_heap->tmp_tuple_unpack_3__element_1;
        assert(generator_heap->var_logic_total == NULL);
        Py_INCREF(tmp_assign_source_24);
        generator_heap->var_logic_total = tmp_assign_source_24;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_2);
        tmp_assign_source_25 = generator_heap->tmp_tuple_unpack_3__element_2;
        assert(Nuitka_Cell_GET(generator_heap->var_current) == NULL);
        Py_INCREF(tmp_assign_source_25);
        PyCell_SET(generator_heap->var_current, tmp_assign_source_25);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = mod_consts[35];
        tmp_assign_source_26 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        assert(!(tmp_assign_source_26 == NULL));
        assert(generator_heap->tmp_tuple_unpack_4__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_26;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_8, 0, 3);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 160;
            goto try_except_handler_9;
        }
        assert(generator_heap->tmp_tuple_unpack_4__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_9, 1, 3);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 160;
            goto try_except_handler_9;
        }
        assert(generator_heap->tmp_tuple_unpack_4__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_10, 2, 3);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 160;
            goto try_except_handler_9;
        }
        assert(generator_heap->tmp_tuple_unpack_4__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_4__element_3 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = generator_heap->tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 160;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[33];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 160;
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_3);
    generator_heap->tmp_tuple_unpack_4__element_3 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_1);
        tmp_assign_source_30 = generator_heap->tmp_tuple_unpack_4__element_1;
        assert(Nuitka_Cell_GET(generator_heap->var_rate_spec) == NULL);
        Py_INCREF(tmp_assign_source_30);
        PyCell_SET(generator_heap->var_rate_spec, tmp_assign_source_30);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_2);
        tmp_assign_source_31 = generator_heap->tmp_tuple_unpack_4__element_2;
        assert(generator_heap->var_factor == NULL);
        Py_INCREF(tmp_assign_source_31);
        generator_heap->var_factor = tmp_assign_source_31;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_3);
        tmp_assign_source_32 = generator_heap->tmp_tuple_unpack_4__element_3;
        assert(generator_heap->var_header == NULL);
        Py_INCREF(tmp_assign_source_32);
        generator_heap->var_header = tmp_assign_source_32;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_3);
    generator_heap->tmp_tuple_unpack_4__element_3 = NULL;

    branch_end_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_10;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_10;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 162;
        tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_10;
        }
        tmp_iter_arg_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_5, 0, tmp_tuple_element_4);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_2;
            }
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[38]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_2;
            }

            tmp_or_left_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_2;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            CHECK_OBJECT(generator_heap->var_factor);
            tmp_or_right_value_2 = generator_heap->var_factor;
            tmp_args_element_value_2 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_args_element_value_2 = tmp_or_left_value_2;
            or_end_2:;
            generator->m_frame->m_frame.f_lineno = 162;
            tmp_tuple_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 162;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_5, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_iter_arg_5);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_33 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        assert(!(tmp_assign_source_33 == NULL));
        assert(generator_heap->tmp_tuple_unpack_5__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_5__source_iter = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_11 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_11, 0, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 162;
            goto try_except_handler_11;
        }
        assert(generator_heap->tmp_tuple_unpack_5__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_5__element_1 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_12 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_12, 1, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 162;
            goto try_except_handler_11;
        }
        assert(generator_heap->tmp_tuple_unpack_5__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_5__element_2 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = generator_heap->tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 162;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 162;
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_10;
    generator_heap->exception_value = generator_heap->exception_keeper_value_10;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_1);
        tmp_assign_source_36 = generator_heap->tmp_tuple_unpack_5__element_1;
        assert(Nuitka_Cell_GET(generator_heap->var_title) == NULL);
        Py_INCREF(tmp_assign_source_36);
        PyCell_SET(generator_heap->var_title, tmp_assign_source_36);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_2);
        tmp_assign_source_37 = generator_heap->tmp_tuple_unpack_5__element_2;
        assert(Nuitka_Cell_GET(generator_heap->var_fps) == NULL);
        Py_INCREF(tmp_assign_source_37);
        PyCell_SET(generator_heap->var_fps, tmp_assign_source_37);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 163;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_12;
        }
        generator->m_frame->m_frame.f_lineno = 163;
        tmp_tuple_element_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 163;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_12;
        }
        tmp_iter_arg_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyTuple_SET_ITEM(tmp_iter_arg_6, 0, tmp_tuple_element_5);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 163;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_3;
            }
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 163;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_3;
            }

            tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[2]);
            generator->m_frame->m_frame.f_lineno = 163;
            tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 163;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_6, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_iter_arg_6);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_38 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        assert(!(tmp_assign_source_38 == NULL));
        assert(generator_heap->tmp_tuple_unpack_6__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_6__source_iter = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 163;
            goto try_except_handler_13;
        }
        assert(generator_heap->tmp_tuple_unpack_6__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_6__element_1 = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_14 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 163;
            goto try_except_handler_13;
        }
        assert(generator_heap->tmp_tuple_unpack_6__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_6__element_2 = tmp_assign_source_40;
    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = generator_heap->tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 163;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 163;
            goto try_except_handler_13;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_12;
    generator_heap->exception_value = generator_heap->exception_keeper_value_12;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_12;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_1);
        tmp_assign_source_41 = generator_heap->tmp_tuple_unpack_6__element_1;
        assert(Nuitka_Cell_GET(generator_heap->var_bar) == NULL);
        Py_INCREF(tmp_assign_source_41);
        PyCell_SET(generator_heap->var_bar, tmp_assign_source_41);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_2);
        tmp_assign_source_42 = generator_heap->tmp_tuple_unpack_6__element_2;
        assert(Nuitka_Cell_GET(generator_heap->var_bar_repr) == NULL);
        Py_INCREF(tmp_assign_source_42);
        PyCell_SET(generator_heap->var_bar_repr, tmp_assign_source_42);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_tuple_element_6;
        if (Nuitka_Cell_GET(generator_heap->var_current) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[41]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_14;
        }

        tmp_tuple_element_6 = Nuitka_Cell_GET(generator_heap->var_current);
        tmp_iter_arg_7 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_iter_arg_7, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[8];
        PyTuple_SET_ITEM0(tmp_iter_arg_7, 1, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[10];
        PyTuple_SET_ITEM0(tmp_iter_arg_7, 2, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[42];
        PyTuple_SET_ITEM0(tmp_iter_arg_7, 3, tmp_tuple_element_6);
        tmp_assign_source_43 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        assert(!(tmp_assign_source_43 == NULL));
        assert(generator_heap->tmp_tuple_unpack_7__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_7__source_iter = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_15, 0, 4);
        if (tmp_assign_source_44 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 164;
            goto try_except_handler_15;
        }
        assert(generator_heap->tmp_tuple_unpack_7__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_7__element_1 = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_16 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_16, 1, 4);
        if (tmp_assign_source_45 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 164;
            goto try_except_handler_15;
        }
        assert(generator_heap->tmp_tuple_unpack_7__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_7__element_2 = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_17 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tmp_unpack_17, 2, 4);
        if (tmp_assign_source_46 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 164;
            goto try_except_handler_15;
        }
        assert(generator_heap->tmp_tuple_unpack_7__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_7__element_3 = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_18 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tmp_unpack_18, 3, 4);
        if (tmp_assign_source_47 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 164;
            goto try_except_handler_15;
        }
        assert(generator_heap->tmp_tuple_unpack_7__element_4 == NULL);
        generator_heap->tmp_tuple_unpack_7__element_4 = tmp_assign_source_47;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = generator_heap->tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 164;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[43];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 164;
            goto try_except_handler_15;
        }
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_7__source_iter);
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_7__source_iter);
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_1);
        tmp_assattr_value_2 = generator_heap->tmp_tuple_unpack_7__element_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_bar));
        tmp_assattr_target_2 = Nuitka_Cell_GET(generator_heap->var_bar);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[41], tmp_assattr_value_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_14;
        }
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_1);
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_2);
        tmp_assattr_value_3 = generator_heap->tmp_tuple_unpack_7__element_2;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_3 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[44], tmp_assattr_value_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_14;
        }
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_2);
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_3);
        tmp_assattr_value_4 = generator_heap->tmp_tuple_unpack_7__element_3;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_4 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[45], tmp_assattr_value_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_14;
        }
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_3);
    generator_heap->tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_4);
        tmp_assattr_value_5 = generator_heap->tmp_tuple_unpack_7__element_4;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_5 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[46], tmp_assattr_value_5);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_14;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_1);
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_2);
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_3);
    generator_heap->tmp_tuple_unpack_7__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_4);
    generator_heap->tmp_tuple_unpack_7__element_4 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_4);
    generator_heap->tmp_tuple_unpack_7__element_4 = NULL;

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_8;
        tmp_iter_arg_8 = mod_consts[47];
        tmp_assign_source_48 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
        assert(!(tmp_assign_source_48 == NULL));
        assert(generator_heap->tmp_tuple_unpack_8__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_8__source_iter = tmp_assign_source_48;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_19 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tmp_unpack_19, 0, 4);
        if (tmp_assign_source_49 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 165;
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_tuple_unpack_8__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_8__element_1 = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_20 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_20, 1, 4);
        if (tmp_assign_source_50 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 165;
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_tuple_unpack_8__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_8__element_2 = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_21 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_21, 2, 4);
        if (tmp_assign_source_51 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 165;
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_tuple_unpack_8__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_8__element_3 = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_22 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_22, 3, 4);
        if (tmp_assign_source_52 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 165;
            goto try_except_handler_17;
        }
        assert(generator_heap->tmp_tuple_unpack_8__element_4 == NULL);
        generator_heap->tmp_tuple_unpack_8__element_4 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = generator_heap->tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 165;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[43];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 165;
            goto try_except_handler_17;
        }
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_8__source_iter);
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_8__source_iter);
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_1);
        tmp_assattr_value_6 = generator_heap->tmp_tuple_unpack_8__element_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_6 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[48], tmp_assattr_value_6);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_16;
        }
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_1);
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_2);
        tmp_assattr_value_7 = generator_heap->tmp_tuple_unpack_8__element_2;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_7 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[49], tmp_assattr_value_7);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_16;
        }
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_2);
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_3);
        tmp_assattr_value_8 = generator_heap->tmp_tuple_unpack_8__element_3;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_8 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[50], tmp_assattr_value_8);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_16;
        }
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_3);
    generator_heap->tmp_tuple_unpack_8__element_3 = NULL;

    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_4);
        tmp_assattr_value_9 = generator_heap->tmp_tuple_unpack_8__element_4;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_9 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[51], tmp_assattr_value_9);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 165;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_16;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    generator_heap->exception_keeper_type_16 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_16 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_16 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_1);
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_2);
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_3);
    generator_heap->tmp_tuple_unpack_8__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_4);
    generator_heap->tmp_tuple_unpack_8__element_4 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_16;
    generator_heap->exception_value = generator_heap->exception_keeper_value_16;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_4);
    generator_heap->tmp_tuple_unpack_8__element_4 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = Py_None;
        tmp_iter_arg_9 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_value_5;
            PyTuple_SET_ITEM0(tmp_iter_arg_9, 0, tmp_tuple_element_7);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 166;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_4;
            }
            generator->m_frame->m_frame.f_lineno = 166;
            tmp_tuple_element_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[53]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 166;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_9, 1, tmp_tuple_element_7);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 166;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_4;
            }

            tmp_called_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 166;
            tmp_tuple_element_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 166;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_9, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_iter_arg_9);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_53 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        assert(!(tmp_assign_source_53 == NULL));
        assert(generator_heap->tmp_tuple_unpack_9__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_9__source_iter = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_23 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_23, 0, 3);
        if (tmp_assign_source_54 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 166;
            goto try_except_handler_19;
        }
        assert(generator_heap->tmp_tuple_unpack_9__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_9__element_1 = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_24 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tmp_unpack_24, 1, 3);
        if (tmp_assign_source_55 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 166;
            goto try_except_handler_19;
        }
        assert(generator_heap->tmp_tuple_unpack_9__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_9__element_2 = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_unpack_25 = generator_heap->tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_56 = UNPACK_NEXT(tmp_unpack_25, 2, 3);
        if (tmp_assign_source_56 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 166;
            goto try_except_handler_19;
        }
        assert(generator_heap->tmp_tuple_unpack_9__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_9__element_3 = tmp_assign_source_56;
    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = generator_heap->tmp_tuple_unpack_9__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 166;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[33];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 166;
            goto try_except_handler_19;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_9__source_iter);
    generator_heap->tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_17;
    generator_heap->exception_value = generator_heap->exception_keeper_value_17;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_1);
    generator_heap->tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_2);
    generator_heap->tmp_tuple_unpack_9__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_3);
    generator_heap->tmp_tuple_unpack_9__element_3 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_9__source_iter);
    generator_heap->tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_1);
        tmp_assign_source_57 = generator_heap->tmp_tuple_unpack_9__element_1;
        assert(Nuitka_Cell_GET(generator_heap->var_thread) == NULL);
        Py_INCREF(tmp_assign_source_57);
        PyCell_SET(generator_heap->var_thread, tmp_assign_source_57);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_1);
    generator_heap->tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_2);
        tmp_assign_source_58 = generator_heap->tmp_tuple_unpack_9__element_2;
        assert(Nuitka_Cell_GET(generator_heap->var_event_renderer) == NULL);
        Py_INCREF(tmp_assign_source_58);
        PyCell_SET(generator_heap->var_event_renderer, tmp_assign_source_58);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_2);
    generator_heap->tmp_tuple_unpack_9__element_2 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_9__element_3);
        tmp_assign_source_59 = generator_heap->tmp_tuple_unpack_9__element_3;
        assert(Nuitka_Cell_GET(generator_heap->var_cond_refresh) == NULL);
        Py_INCREF(tmp_assign_source_59);
        PyCell_SET(generator_heap->var_cond_refresh, tmp_assign_source_59);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_9__element_3);
    generator_heap->tmp_tuple_unpack_9__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[55]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 169;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_20;
        }
        tmp_iter_arg_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_6;
            PyTuple_SET_ITEM0(tmp_iter_arg_10, 0, tmp_tuple_element_8);
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 169;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_5;
            }
            generator->m_frame->m_frame.f_lineno = 169;
            tmp_tuple_element_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 169;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_10, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_iter_arg_10);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_60 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        assert(!(tmp_assign_source_60 == NULL));
        assert(generator_heap->tmp_tuple_unpack_10__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_10__source_iter = tmp_assign_source_60;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
        tmp_unpack_26 = generator_heap->tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tmp_unpack_26, 0, 2);
        if (tmp_assign_source_61 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 169;
            goto try_except_handler_21;
        }
        assert(generator_heap->tmp_tuple_unpack_10__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_10__element_1 = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
        tmp_unpack_27 = generator_heap->tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tmp_unpack_27, 1, 2);
        if (tmp_assign_source_62 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 169;
            goto try_except_handler_21;
        }
        assert(generator_heap->tmp_tuple_unpack_10__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_10__element_2 = tmp_assign_source_62;
    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = generator_heap->tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 169;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 169;
            goto try_except_handler_21;
        }
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    generator_heap->exception_keeper_type_19 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_19 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_19 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_10__source_iter);
    generator_heap->tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_19;
    generator_heap->exception_value = generator_heap->exception_keeper_value_19;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_19;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

    goto try_except_handler_20;
    // End of try:
    try_end_19:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_20:;
    generator_heap->exception_keeper_type_20 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_20 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_20 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_20 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_1);
    generator_heap->tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_2);
    generator_heap->tmp_tuple_unpack_10__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_20;
    generator_heap->exception_value = generator_heap->exception_keeper_value_20;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_20;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_10__source_iter);
    generator_heap->tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__element_1);
        tmp_assign_source_63 = generator_heap->tmp_tuple_unpack_10__element_1;
        assert(Nuitka_Cell_GET(generator_heap->var_term) == NULL);
        Py_INCREF(tmp_assign_source_63);
        PyCell_SET(generator_heap->var_term, tmp_assign_source_63);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_1);
    generator_heap->tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_10__element_2);
        tmp_assign_source_64 = generator_heap->tmp_tuple_unpack_10__element_2;
        assert(Nuitka_Cell_GET(generator_heap->var_hook_manager) == NULL);
        Py_INCREF(tmp_assign_source_64);
        PyCell_SET(generator_heap->var_hook_manager, tmp_assign_source_64);

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_10__element_2);
    generator_heap->tmp_tuple_unpack_10__element_2 = NULL;

    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[58]);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(generator_heap->var_term) == NULL);
        PyCell_SET(generator_heap->var_term, tmp_assign_source_65);

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[60]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(generator_heap->var_header);
        tmp_args_element_value_4 = generator_heap->var_header;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_4 = mod_consts[8];
        condexpr_end_1:;
        if (Nuitka_Cell_GET(generator_heap->var_current) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[41]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(generator_heap->var_current);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_cond_refresh));
        tmp_args_element_value_6 = Nuitka_Cell_GET(generator_heap->var_cond_refresh);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_term));
        tmp_args_element_value_7 = Nuitka_Cell_GET(generator_heap->var_term);
        generator->m_frame->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(generator_heap->var_hook_manager) == NULL);
        PyCell_SET(generator_heap->var_hook_manager, tmp_assign_source_66);

    }
    branch_end_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_4;
        int tmp_truth_name_5;
        if (Nuitka_Cell_GET(generator_heap->var_term) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[61]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(generator_heap->var_term);
        tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
        if (tmp_attribute_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_4);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_4);

            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_4);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        struct Nuitka_CellObject *tmp_closure_10[5];
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_closure_10[0] = generator_heap->var_alive_repr;
        Py_INCREF(tmp_closure_10[0]);
        tmp_closure_10[1] = generator_heap->var_event_renderer;
        Py_INCREF(tmp_closure_10[1]);
        tmp_closure_10[2] = generator_heap->var_start_monitoring;
        Py_INCREF(tmp_closure_10[2]);
        tmp_closure_10[3] = generator_heap->var_stop_monitoring;
        Py_INCREF(tmp_closure_10[3]);
        tmp_closure_10[4] = generator_heap->var_term;
        Py_INCREF(tmp_closure_10[4]);

        tmp_args_element_value_8 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring(tmp_closure_10);

        generator->m_frame->m_frame.f_lineno = 176;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_pause_monitoring == NULL);
        generator_heap->var_pause_monitoring = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(generator_heap->var_pause_monitoring);
        tmp_assattr_value_10 = generator_heap->var_pause_monitoring;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_bar));
        tmp_assattr_target_10 = Nuitka_Cell_GET(generator_heap->var_bar);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[66], tmp_assattr_value_10);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[67]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator_heap->var_run);
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_9);

            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 188;
        tmp_tuple_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_9);

            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_kw_call_value_1_1, 0, tmp_tuple_element_9);
        generator->m_frame->m_frame.f_lineno = 188;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_68 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_thread);
            PyCell_SET(generator_heap->var_thread, tmp_assign_source_68);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = Py_True;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_thread));
        tmp_assattr_target_11 = Nuitka_Cell_GET(generator_heap->var_thread);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[70], tmp_assattr_value_11);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_thread));
        tmp_called_instance_2 = Nuitka_Cell_GET(generator_heap->var_thread);
        generator->m_frame->m_frame.f_lineno = 190;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[71]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        int tmp_truth_name_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_5;
        int tmp_truth_name_7;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_6 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
        if (tmp_attribute_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_attribute_value_5);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_5);

            generator_heap->exception_lineno = 192;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_5);
        tmp_condition_result_9 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_9 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[73];
        CHECK_OBJECT(generator_heap->var_logic_total);
        tmp_args_element_value_11 = generator_heap->var_logic_total;
        generator->m_frame->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(generator_heap->var_gen_eta) == NULL);
        PyCell_SET(generator_heap->var_gen_eta, tmp_assign_source_69);

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_gen_eta));
        tmp_called_instance_3 = Nuitka_Cell_GET(generator_heap->var_gen_eta);
        generator->m_frame->m_frame.f_lineno = 194;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[74],
            PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_70;
        struct Nuitka_CellObject *tmp_closure_11[4];

        tmp_closure_11[0] = generator_heap->var_current;
        Py_INCREF(tmp_closure_11[0]);
        tmp_closure_11[1] = generator_heap->var_gen_eta;
        Py_INCREF(tmp_closure_11[1]);
        tmp_closure_11[2] = generator_heap->var_rate_spec;
        Py_INCREF(tmp_closure_11[2]);
        tmp_closure_11[3] = generator_heap->var_run;
        Py_INCREF(tmp_closure_11[3]);

        tmp_assign_source_70 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__11_stats(tmp_closure_11);

        assert(Nuitka_Cell_GET(generator_heap->var_stats) == NULL);
        PyCell_SET(generator_heap->var_stats, tmp_assign_source_70);

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_bar_repr));
        tmp_expression_value_10 = Nuitka_Cell_GET(generator_heap->var_bar_repr);
        tmp_assign_source_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[77]);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_bar_repr);
            PyCell_SET(generator_heap->var_bar_repr, tmp_assign_source_71);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        struct Nuitka_CellObject *tmp_closure_12[1];

        tmp_closure_12[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_12[0]);

        tmp_assign_source_72 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__12_stats(tmp_closure_12);

        assert(Nuitka_Cell_GET(generator_heap->var_stats) == NULL);
        PyCell_SET(generator_heap->var_stats, tmp_assign_source_72);

    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_73;
        struct Nuitka_CellObject *tmp_closure_13[2];

        tmp_closure_13[0] = generator_heap->var_rate_spec;
        Py_INCREF(tmp_closure_13[0]);
        tmp_closure_13[1] = generator_heap->var_run;
        Py_INCREF(tmp_closure_13[1]);

        tmp_assign_source_73 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__13_stats_end(tmp_closure_13);

        assert(generator_heap->var_stats_end == NULL);
        generator_heap->var_stats_end = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        struct Nuitka_CellObject *tmp_closure_14[1];

        tmp_closure_14[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_14[0]);

        tmp_assign_source_74 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__14_elapsed(tmp_closure_14);

        assert(Nuitka_Cell_GET(generator_heap->var_elapsed) == NULL);
        PyCell_SET(generator_heap->var_elapsed, tmp_assign_source_74);

    }
    {
        PyObject *tmp_assign_source_75;
        struct Nuitka_CellObject *tmp_closure_15[1];

        tmp_closure_15[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_15[0]);

        tmp_assign_source_75 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__15_elapsed_end(tmp_closure_15);

        assert(generator_heap->var_elapsed_end == NULL);
        generator_heap->var_elapsed_end = tmp_assign_source_75;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_8;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_8 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_attribute_value_6;
        int tmp_truth_name_9;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_attribute_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[20]);
        if (tmp_attribute_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_6);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_6);

            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_6);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_76;
        struct Nuitka_CellObject *tmp_closure_16[2];

        tmp_closure_16[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_16[0]);
        tmp_closure_16[1] = generator->m_closure[3];
        Py_INCREF(tmp_closure_16[1]);

        tmp_assign_source_76 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__16_update_hook(tmp_closure_16);

        assert(Nuitka_Cell_GET(generator_heap->var_update_hook) == NULL);
        PyCell_SET(generator_heap->var_update_hook, tmp_assign_source_76);

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_77;
        struct Nuitka_CellObject *tmp_closure_17[2];

        tmp_closure_17[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_17[0]);
        tmp_closure_17[1] = generator->m_closure[3];
        Py_INCREF(tmp_closure_17[1]);

        tmp_assign_source_77 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__17_update_hook(tmp_closure_17);

        assert(Nuitka_Cell_GET(generator_heap->var_update_hook) == NULL);
        PyCell_SET(generator_heap->var_update_hook, tmp_assign_source_77);

    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_78;
        struct Nuitka_CellObject *tmp_closure_18[2];

        tmp_closure_18[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_18[0]);
        tmp_closure_18[1] = generator->m_closure[3];
        Py_INCREF(tmp_closure_18[1]);

        tmp_assign_source_78 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__18_monitor(tmp_closure_18);

        assert(Nuitka_Cell_GET(generator_heap->var_monitor) == NULL);
        PyCell_SET(generator_heap->var_monitor, tmp_assign_source_78);

    }
    {
        PyObject *tmp_assign_source_79;
        struct Nuitka_CellObject *tmp_closure_19[3];

        tmp_closure_19[0] = generator_heap->var_monitor_original;
        Py_INCREF(tmp_closure_19[0]);
        tmp_closure_19[1] = generator_heap->var_run;
        Py_INCREF(tmp_closure_19[1]);
        tmp_closure_19[2] = generator->m_closure[3];
        Py_INCREF(tmp_closure_19[2]);

        tmp_assign_source_79 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__19_monitor_end(tmp_closure_19);

        assert(generator_heap->var_monitor_end == NULL);
        generator_heap->var_monitor_end = tmp_assign_source_79;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_80;


        tmp_assign_source_80 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__20_update_hook();

        assert(Nuitka_Cell_GET(generator_heap->var_update_hook) == NULL);
        PyCell_SET(generator_heap->var_update_hook, tmp_assign_source_80);

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_attribute_value_7;
        int tmp_truth_name_10;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_attribute_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[20]);
        if (tmp_attribute_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_attribute_value_7);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_7);

            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_7);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_81;
        struct Nuitka_CellObject *tmp_closure_20[1];

        tmp_closure_20[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_20[0]);

        tmp_assign_source_81 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__21_monitor(tmp_closure_20);

        assert(Nuitka_Cell_GET(generator_heap->var_monitor) == NULL);
        PyCell_SET(generator_heap->var_monitor, tmp_assign_source_81);

    }
    {
        PyObject *tmp_assign_source_82;
        struct Nuitka_CellObject *tmp_closure_21[2];

        tmp_closure_21[0] = generator_heap->var_monitor_original;
        Py_INCREF(tmp_closure_21[0]);
        tmp_closure_21[1] = generator_heap->var_run;
        Py_INCREF(tmp_closure_21[1]);

        tmp_assign_source_82 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__22_monitor_end(tmp_closure_21);

        assert(generator_heap->var_monitor_end == NULL);
        generator_heap->var_monitor_end = tmp_assign_source_82;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_83;
        struct Nuitka_CellObject *tmp_closure_22[1];

        tmp_closure_22[0] = generator_heap->var_run;
        Py_INCREF(tmp_closure_22[0]);

        tmp_assign_source_83 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__23_monitor(tmp_closure_22);

        assert(Nuitka_Cell_GET(generator_heap->var_monitor) == NULL);
        PyCell_SET(generator_heap->var_monitor, tmp_assign_source_83);

    }
    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_monitor));
        tmp_assign_source_84 = Nuitka_Cell_GET(generator_heap->var_monitor);
        assert(generator_heap->var_monitor_end == NULL);
        Py_INCREF(tmp_assign_source_84);
        generator_heap->var_monitor_end = tmp_assign_source_84;
    }
    branch_end_11:;
    branch_end_9:;
    {
        PyObject *tmp_assign_source_85;
        if (Nuitka_Cell_GET(generator_heap->var_monitor) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[85]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 244;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_85 = Nuitka_Cell_GET(generator_heap->var_monitor);
        assert(Nuitka_Cell_GET(generator_heap->var_monitor_original) == NULL);
        Py_INCREF(tmp_assign_source_85);
        PyCell_SET(generator_heap->var_monitor_original, tmp_assign_source_85);

    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_13;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[85]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 245;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_86 == NULL)) {
            tmp_assign_source_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 246;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_assign_unpack_1__assign_source == NULL);
        Py_INCREF(tmp_assign_source_86);
        generator_heap->tmp_assign_unpack_1__assign_source = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_87 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_monitor);
            PyCell_SET(generator_heap->var_monitor, tmp_assign_source_87);
            Py_INCREF(tmp_assign_source_87);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_88 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = generator_heap->var_monitor_end;
            assert(old != NULL);
            generator_heap->var_monitor_end = tmp_assign_source_88;
            Py_INCREF(generator_heap->var_monitor_end);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    branch_no_12:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_14;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[75]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_89 == NULL)) {
            tmp_assign_source_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_assign_unpack_2__assign_source == NULL);
        Py_INCREF(tmp_assign_source_89);
        generator_heap->tmp_assign_unpack_2__assign_source = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
        tmp_assign_source_90 = generator_heap->tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_stats);
            PyCell_SET(generator_heap->var_stats, tmp_assign_source_90);
            Py_INCREF(tmp_assign_source_90);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
        tmp_assign_source_91 = generator_heap->tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = generator_heap->var_stats_end;
            assert(old != NULL);
            generator_heap->var_stats_end = tmp_assign_source_91;
            Py_INCREF(generator_heap->var_stats_end);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_2__assign_source);
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    branch_no_13:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_15;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[46]);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_92 == NULL)) {
            tmp_assign_source_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_assign_unpack_3__assign_source == NULL);
        Py_INCREF(tmp_assign_source_92);
        generator_heap->tmp_assign_unpack_3__assign_source = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_3__assign_source);
        tmp_assign_source_93 = generator_heap->tmp_assign_unpack_3__assign_source;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_elapsed);
            PyCell_SET(generator_heap->var_elapsed, tmp_assign_source_93);
            Py_INCREF(tmp_assign_source_93);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_3__assign_source);
        tmp_assign_source_94 = generator_heap->tmp_assign_unpack_3__assign_source;
        {
            PyObject *old = generator_heap->var_elapsed_end;
            assert(old != NULL);
            generator_heap->var_elapsed_end = tmp_assign_source_94;
            Py_INCREF(generator_heap->var_elapsed_end);
            Py_DECREF(old);
        }

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_3__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_3__assign_source);
    generator_heap->tmp_assign_unpack_3__assign_source = NULL;
    branch_no_14:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(generator_heap->var_start_monitoring) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_called_value_12 = Nuitka_Cell_GET(generator_heap->var_start_monitoring);
        generator->m_frame->m_frame.f_lineno = 252;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_16;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_bar));
        tmp_expression_value_16 = Nuitka_Cell_GET(generator_heap->var_bar);
        Py_INCREF(tmp_expression_value_16);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_16;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 254;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_22;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_22:;
    generator_heap->exception_keeper_type_21 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_21 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_21 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_21 == NULL) {
        generator_heap->exception_keeper_tb_21 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_21);
    } else if (generator_heap->exception_keeper_lineno_21 != 0) {
        generator_heap->exception_keeper_tb_21 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_21, generator->m_frame, generator_heap->exception_keeper_lineno_21);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_21, &generator_heap->exception_keeper_value_21, &generator_heap->exception_keeper_tb_21);
    // Tried code:
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(generator_heap->var_stop_monitoring) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[27]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }

        tmp_called_value_13 = Nuitka_Cell_GET(generator_heap->var_stop_monitoring);
        generator->m_frame->m_frame.f_lineno = 256;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_11;
        if (Nuitka_Cell_GET(generator_heap->var_thread) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[90]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }

        tmp_truth_name_11 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator_heap->var_thread));
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }
        tmp_condition_result_16 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_tuple_element_10;
        if (Nuitka_Cell_GET(generator_heap->var_thread) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[90]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_24;
        }

        tmp_tuple_element_10 = Nuitka_Cell_GET(generator_heap->var_thread);
        tmp_iter_arg_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_11, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = Py_None;
        PyTuple_SET_ITEM0(tmp_iter_arg_11, 1, tmp_tuple_element_10);
        tmp_assign_source_95 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        assert(!(tmp_assign_source_95 == NULL));
        assert(generator_heap->tmp_tuple_unpack_11__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_11__source_iter = tmp_assign_source_95;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_unpack_28 = generator_heap->tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_96 = UNPACK_NEXT(tmp_unpack_28, 0, 2);
        if (tmp_assign_source_96 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_25;
        }
        assert(generator_heap->tmp_tuple_unpack_11__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_11__element_1 = tmp_assign_source_96;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_unpack_29 = generator_heap->tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_97 = UNPACK_NEXT(tmp_unpack_29, 1, 2);
        if (tmp_assign_source_97 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_25;
        }
        assert(generator_heap->tmp_tuple_unpack_11__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_11__element_2 = tmp_assign_source_97;
    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = generator_heap->tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_25;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_25;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_25:;
    generator_heap->exception_keeper_type_22 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_22 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_22 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_11__source_iter);
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_22;
    generator_heap->exception_value = generator_heap->exception_keeper_value_22;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_22;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_22;

    goto try_except_handler_24;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_24:;
    generator_heap->exception_keeper_type_23 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_23 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_23 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_1);
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_2);
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_23;
    generator_heap->exception_value = generator_heap->exception_keeper_value_23;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_23;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_11__source_iter);
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__element_1);
        tmp_assign_source_98 = generator_heap->tmp_tuple_unpack_11__element_1;
        assert(generator_heap->var_local_copy == NULL);
        Py_INCREF(tmp_assign_source_98);
        generator_heap->var_local_copy = tmp_assign_source_98;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_1);
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__element_2);
        tmp_assign_source_99 = generator_heap->tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_thread);
            PyCell_SET(generator_heap->var_thread, tmp_assign_source_99);
            Py_INCREF(tmp_assign_source_99);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_2);
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;

    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(generator_heap->var_local_copy);
        tmp_expression_value_17 = generator_heap->var_local_copy;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[91]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }
        generator->m_frame->m_frame.f_lineno = 259;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_bar));
        tmp_attrdel_target_1 = Nuitka_Cell_GET(generator_heap->var_bar);
        generator_heap->tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[66]);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_23;
        }
    }
    branch_no_15:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 253;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
    goto try_except_handler_23;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_23:;
    generator_heap->exception_keeper_type_24 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_24 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_24 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_24;
    generator_heap->exception_value = generator_heap->exception_keeper_value_24;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_24;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_21:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_6;
        if (Nuitka_Cell_GET(generator_heap->var_stop_monitoring) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[27]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_called_value_15 = Nuitka_Cell_GET(generator_heap->var_stop_monitoring);
        generator->m_frame->m_frame.f_lineno = 256;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 256;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_12;
        if (Nuitka_Cell_GET(generator_heap->var_thread) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[90]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_12 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator_heap->var_thread));
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 257;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_tuple_element_11;
        if (Nuitka_Cell_GET(generator_heap->var_thread) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[90]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto try_except_handler_26;
        }

        tmp_tuple_element_11 = Nuitka_Cell_GET(generator_heap->var_thread);
        tmp_iter_arg_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_12, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = Py_None;
        PyTuple_SET_ITEM0(tmp_iter_arg_12, 1, tmp_tuple_element_11);
        tmp_assign_source_100 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        assert(!(tmp_assign_source_100 == NULL));
        assert(generator_heap->tmp_tuple_unpack_11__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_11__source_iter = tmp_assign_source_100;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_unpack_30;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_unpack_30 = generator_heap->tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_101 = UNPACK_NEXT(tmp_unpack_30, 0, 2);
        if (tmp_assign_source_101 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_27;
        }
        assert(generator_heap->tmp_tuple_unpack_11__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_11__element_1 = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_unpack_31;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_unpack_31 = generator_heap->tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_102 = UNPACK_NEXT(tmp_unpack_31, 1, 2);
        if (tmp_assign_source_102 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_27;
        }
        assert(generator_heap->tmp_tuple_unpack_11__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_11__element_2 = tmp_assign_source_102;
    }
    {
        PyObject *tmp_iterator_name_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_12 = generator_heap->tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_12); assert(HAS_ITERNEXT(tmp_iterator_name_12));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_12)->tp_iternext)(tmp_iterator_name_12);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 258;
                    goto try_except_handler_27;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 258;
            goto try_except_handler_27;
        }
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_27:;
    generator_heap->exception_keeper_type_25 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_25 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_25 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_25 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_11__source_iter);
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_25;
    generator_heap->exception_value = generator_heap->exception_keeper_value_25;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_25;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    try_end_24:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_26:;
    generator_heap->exception_keeper_type_26 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_26 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_26 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_26 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_1);
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_2);
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_26;
    generator_heap->exception_value = generator_heap->exception_keeper_value_26;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_26;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_11__source_iter);
    generator_heap->tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__element_1);
        tmp_assign_source_103 = generator_heap->tmp_tuple_unpack_11__element_1;
        assert(generator_heap->var_local_copy == NULL);
        Py_INCREF(tmp_assign_source_103);
        generator_heap->var_local_copy = tmp_assign_source_103;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_1);
    generator_heap->tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_11__element_2);
        tmp_assign_source_104 = generator_heap->tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_thread);
            PyCell_SET(generator_heap->var_thread, tmp_assign_source_104);
            Py_INCREF(tmp_assign_source_104);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_11__element_2);
    generator_heap->tmp_tuple_unpack_11__element_2 = NULL;

    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(generator_heap->var_local_copy);
        tmp_expression_value_18 = generator_heap->var_local_copy;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[91]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 259;
        tmp_call_result_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_attrdel_target_2;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_bar));
        tmp_attrdel_target_2 = Nuitka_Cell_GET(generator_heap->var_bar);
        generator_heap->tmp_res = PyObject_DelAttr(tmp_attrdel_target_2, mod_consts[66]);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 260;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
    }
    branch_no_16:;
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_tuple_element_12;
        CHECK_OBJECT(generator_heap->var_elapsed_end);
        tmp_tuple_element_12 = generator_heap->var_elapsed_end;
        tmp_iter_arg_13 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_19;
            PyTuple_SET_ITEM0(tmp_iter_arg_13, 0, tmp_tuple_element_12);
            CHECK_OBJECT(generator_heap->var_stats_end);
            tmp_tuple_element_12 = generator_heap->var_stats_end;
            PyTuple_SET_ITEM0(tmp_iter_arg_13, 1, tmp_tuple_element_12);
            CHECK_OBJECT(generator_heap->var_monitor_end);
            tmp_tuple_element_12 = generator_heap->var_monitor_end;
            PyTuple_SET_ITEM0(tmp_iter_arg_13, 2, tmp_tuple_element_12);
            if (Nuitka_Cell_GET(generator_heap->var_bar_repr) == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[92]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 263;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_6;
            }

            tmp_expression_value_19 = Nuitka_Cell_GET(generator_heap->var_bar_repr);
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[93]);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 263;
                generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_13, 3, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_iter_arg_13);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_105 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        assert(!(tmp_assign_source_105 == NULL));
        assert(generator_heap->tmp_tuple_unpack_12__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_12__source_iter = tmp_assign_source_105;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_unpack_32;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_unpack_32 = generator_heap->tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_106 = UNPACK_NEXT(tmp_unpack_32, 0, 4);
        if (tmp_assign_source_106 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 263;
            goto try_except_handler_29;
        }
        assert(generator_heap->tmp_tuple_unpack_12__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_12__element_1 = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_unpack_33;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_unpack_33 = generator_heap->tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_107 = UNPACK_NEXT(tmp_unpack_33, 1, 4);
        if (tmp_assign_source_107 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 263;
            goto try_except_handler_29;
        }
        assert(generator_heap->tmp_tuple_unpack_12__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_12__element_2 = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_unpack_34;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_unpack_34 = generator_heap->tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_108 = UNPACK_NEXT(tmp_unpack_34, 2, 4);
        if (tmp_assign_source_108 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 263;
            goto try_except_handler_29;
        }
        assert(generator_heap->tmp_tuple_unpack_12__element_3 == NULL);
        generator_heap->tmp_tuple_unpack_12__element_3 = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_unpack_35;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_unpack_35 = generator_heap->tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_109 = UNPACK_NEXT(tmp_unpack_35, 3, 4);
        if (tmp_assign_source_109 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 263;
            goto try_except_handler_29;
        }
        assert(generator_heap->tmp_tuple_unpack_12__element_4 == NULL);
        generator_heap->tmp_tuple_unpack_12__element_4 = tmp_assign_source_109;
    }
    {
        PyObject *tmp_iterator_name_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
        tmp_iterator_name_13 = generator_heap->tmp_tuple_unpack_12__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_13); assert(HAS_ITERNEXT(tmp_iterator_name_13));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_13)->tp_iternext)(tmp_iterator_name_13);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
                    generator_heap->exception_lineno = 263;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[43];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            generator_heap->exception_lineno = 263;
            goto try_except_handler_29;
        }
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_29:;
    generator_heap->exception_keeper_type_27 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_27 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_27 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_27 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_12__source_iter);
    generator_heap->tmp_tuple_unpack_12__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_27;
    generator_heap->exception_value = generator_heap->exception_keeper_value_27;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_27;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_26:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_28:;
    generator_heap->exception_keeper_type_28 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_28 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_28 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_28 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_1);
    generator_heap->tmp_tuple_unpack_12__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_2);
    generator_heap->tmp_tuple_unpack_12__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_3);
    generator_heap->tmp_tuple_unpack_12__element_3 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_4);
    generator_heap->tmp_tuple_unpack_12__element_4 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_28;
    generator_heap->exception_value = generator_heap->exception_keeper_value_28;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_28;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_12__source_iter);
    generator_heap->tmp_tuple_unpack_12__source_iter = NULL;
    {
        PyObject *tmp_assign_source_110;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__element_1);
        tmp_assign_source_110 = generator_heap->tmp_tuple_unpack_12__element_1;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_elapsed);
            PyCell_SET(generator_heap->var_elapsed, tmp_assign_source_110);
            Py_INCREF(tmp_assign_source_110);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_1);
    generator_heap->tmp_tuple_unpack_12__element_1 = NULL;

    {
        PyObject *tmp_assign_source_111;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__element_2);
        tmp_assign_source_111 = generator_heap->tmp_tuple_unpack_12__element_2;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_stats);
            PyCell_SET(generator_heap->var_stats, tmp_assign_source_111);
            Py_INCREF(tmp_assign_source_111);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_2);
    generator_heap->tmp_tuple_unpack_12__element_2 = NULL;

    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__element_3);
        tmp_assign_source_112 = generator_heap->tmp_tuple_unpack_12__element_3;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_monitor);
            PyCell_SET(generator_heap->var_monitor, tmp_assign_source_112);
            Py_INCREF(tmp_assign_source_112);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_3);
    generator_heap->tmp_tuple_unpack_12__element_3 = NULL;

    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_12__element_4);
        tmp_assign_source_113 = generator_heap->tmp_tuple_unpack_12__element_4;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_bar_repr);
            PyCell_SET(generator_heap->var_bar_repr, tmp_assign_source_113);
            Py_INCREF(tmp_assign_source_113);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_12__element_4);
    generator_heap->tmp_tuple_unpack_12__element_4 = NULL;

    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_20;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[19]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[94]);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = mod_consts[8];
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_run));
        tmp_assattr_target_12 = Nuitka_Cell_GET(generator_heap->var_run);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[44], tmp_assattr_value_12);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
    }
    branch_no_17:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_alive_repr));
        tmp_called_value_17 = Nuitka_Cell_GET(generator_heap->var_alive_repr);
        generator->m_frame->m_frame.f_lineno = 266;
        tmp_call_result_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_9;
        if (Nuitka_Cell_GET(generator_heap->var_term) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[61]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(generator_heap->var_term);
        generator->m_frame->m_frame.f_lineno = 267;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[95],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ccccccccccoccoocccccccccoccococcoco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[2],
            generator->m_closure[3],
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_run,
            generator_heap->var_alive_repr,
            generator_heap->var_set_text,
            generator_heap->var_bar_handle,
            generator_heap->var_start_monitoring,
            generator_heap->var_stop_monitoring,
            generator_heap->var_logic_total,
            generator_heap->var_current,
            generator_heap->var_rate_spec,
            generator_heap->var_factor,
            generator_heap->var_header,
            generator_heap->var_title,
            generator_heap->var_fps,
            generator_heap->var_bar,
            generator_heap->var_bar_repr,
            generator_heap->var_thread,
            generator_heap->var_event_renderer,
            generator_heap->var_cond_refresh,
            generator_heap->var_term,
            generator_heap->var_hook_manager,
            generator_heap->var_pause_monitoring,
            generator_heap->var_gen_eta,
            generator_heap->var_stats,
            generator_heap->var_stats_end,
            generator_heap->var_elapsed,
            generator_heap->var_elapsed_end,
            generator_heap->var_update_hook,
            generator_heap->var_monitor,
            generator_heap->var_monitor_end,
            generator_heap->var_monitor_original,
            generator_heap->var_local_copy
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_29 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_29 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_29 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_29 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->var_run);
    Py_DECREF(generator_heap->var_run);
    generator_heap->var_run = NULL;
    CHECK_OBJECT(generator_heap->var_alive_repr);
    Py_DECREF(generator_heap->var_alive_repr);
    generator_heap->var_alive_repr = NULL;
    CHECK_OBJECT(generator_heap->var_set_text);
    Py_DECREF(generator_heap->var_set_text);
    generator_heap->var_set_text = NULL;
    CHECK_OBJECT(generator_heap->var_bar_handle);
    Py_DECREF(generator_heap->var_bar_handle);
    generator_heap->var_bar_handle = NULL;
    CHECK_OBJECT(generator_heap->var_start_monitoring);
    Py_DECREF(generator_heap->var_start_monitoring);
    generator_heap->var_start_monitoring = NULL;
    CHECK_OBJECT(generator_heap->var_stop_monitoring);
    Py_DECREF(generator_heap->var_stop_monitoring);
    generator_heap->var_stop_monitoring = NULL;
    Py_XDECREF(generator_heap->var_logic_total);
    generator_heap->var_logic_total = NULL;
    CHECK_OBJECT(generator_heap->var_current);
    Py_DECREF(generator_heap->var_current);
    generator_heap->var_current = NULL;
    CHECK_OBJECT(generator_heap->var_rate_spec);
    Py_DECREF(generator_heap->var_rate_spec);
    generator_heap->var_rate_spec = NULL;
    Py_XDECREF(generator_heap->var_factor);
    generator_heap->var_factor = NULL;
    Py_XDECREF(generator_heap->var_header);
    generator_heap->var_header = NULL;
    CHECK_OBJECT(generator_heap->var_title);
    Py_DECREF(generator_heap->var_title);
    generator_heap->var_title = NULL;
    CHECK_OBJECT(generator_heap->var_fps);
    Py_DECREF(generator_heap->var_fps);
    generator_heap->var_fps = NULL;
    CHECK_OBJECT(generator_heap->var_bar);
    Py_DECREF(generator_heap->var_bar);
    generator_heap->var_bar = NULL;
    CHECK_OBJECT(generator_heap->var_bar_repr);
    Py_DECREF(generator_heap->var_bar_repr);
    generator_heap->var_bar_repr = NULL;
    CHECK_OBJECT(generator_heap->var_thread);
    Py_DECREF(generator_heap->var_thread);
    generator_heap->var_thread = NULL;
    CHECK_OBJECT(generator_heap->var_event_renderer);
    Py_DECREF(generator_heap->var_event_renderer);
    generator_heap->var_event_renderer = NULL;
    CHECK_OBJECT(generator_heap->var_cond_refresh);
    Py_DECREF(generator_heap->var_cond_refresh);
    generator_heap->var_cond_refresh = NULL;
    CHECK_OBJECT(generator_heap->var_term);
    Py_DECREF(generator_heap->var_term);
    generator_heap->var_term = NULL;
    CHECK_OBJECT(generator_heap->var_hook_manager);
    Py_DECREF(generator_heap->var_hook_manager);
    generator_heap->var_hook_manager = NULL;
    Py_XDECREF(generator_heap->var_pause_monitoring);
    generator_heap->var_pause_monitoring = NULL;
    CHECK_OBJECT(generator_heap->var_gen_eta);
    Py_DECREF(generator_heap->var_gen_eta);
    generator_heap->var_gen_eta = NULL;
    CHECK_OBJECT(generator_heap->var_stats);
    Py_DECREF(generator_heap->var_stats);
    generator_heap->var_stats = NULL;
    Py_XDECREF(generator_heap->var_stats_end);
    generator_heap->var_stats_end = NULL;
    CHECK_OBJECT(generator_heap->var_elapsed);
    Py_DECREF(generator_heap->var_elapsed);
    generator_heap->var_elapsed = NULL;
    Py_XDECREF(generator_heap->var_elapsed_end);
    generator_heap->var_elapsed_end = NULL;
    CHECK_OBJECT(generator_heap->var_update_hook);
    Py_DECREF(generator_heap->var_update_hook);
    generator_heap->var_update_hook = NULL;
    CHECK_OBJECT(generator_heap->var_monitor);
    Py_DECREF(generator_heap->var_monitor);
    generator_heap->var_monitor = NULL;
    Py_XDECREF(generator_heap->var_monitor_end);
    generator_heap->var_monitor_end = NULL;
    CHECK_OBJECT(generator_heap->var_monitor_original);
    Py_DECREF(generator_heap->var_monitor_original);
    generator_heap->var_monitor_original = NULL;
    Py_XDECREF(generator_heap->var_local_copy);
    generator_heap->var_local_copy = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_29;
    generator_heap->exception_value = generator_heap->exception_keeper_value_29;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_29;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_29;

    goto function_exception_exit;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(generator_heap->var_run);
    Py_DECREF(generator_heap->var_run);
    generator_heap->var_run = NULL;
    CHECK_OBJECT(generator_heap->var_alive_repr);
    Py_DECREF(generator_heap->var_alive_repr);
    generator_heap->var_alive_repr = NULL;
    CHECK_OBJECT(generator_heap->var_set_text);
    Py_DECREF(generator_heap->var_set_text);
    generator_heap->var_set_text = NULL;
    CHECK_OBJECT(generator_heap->var_bar_handle);
    Py_DECREF(generator_heap->var_bar_handle);
    generator_heap->var_bar_handle = NULL;
    CHECK_OBJECT(generator_heap->var_start_monitoring);
    Py_DECREF(generator_heap->var_start_monitoring);
    generator_heap->var_start_monitoring = NULL;
    CHECK_OBJECT(generator_heap->var_stop_monitoring);
    Py_DECREF(generator_heap->var_stop_monitoring);
    generator_heap->var_stop_monitoring = NULL;
    CHECK_OBJECT(generator_heap->var_logic_total);
    Py_DECREF(generator_heap->var_logic_total);
    generator_heap->var_logic_total = NULL;
    CHECK_OBJECT(generator_heap->var_current);
    Py_DECREF(generator_heap->var_current);
    generator_heap->var_current = NULL;
    CHECK_OBJECT(generator_heap->var_rate_spec);
    Py_DECREF(generator_heap->var_rate_spec);
    generator_heap->var_rate_spec = NULL;
    CHECK_OBJECT(generator_heap->var_factor);
    Py_DECREF(generator_heap->var_factor);
    generator_heap->var_factor = NULL;
    CHECK_OBJECT(generator_heap->var_header);
    Py_DECREF(generator_heap->var_header);
    generator_heap->var_header = NULL;
    CHECK_OBJECT(generator_heap->var_title);
    Py_DECREF(generator_heap->var_title);
    generator_heap->var_title = NULL;
    CHECK_OBJECT(generator_heap->var_fps);
    Py_DECREF(generator_heap->var_fps);
    generator_heap->var_fps = NULL;
    CHECK_OBJECT(generator_heap->var_bar);
    Py_DECREF(generator_heap->var_bar);
    generator_heap->var_bar = NULL;
    CHECK_OBJECT(generator_heap->var_bar_repr);
    Py_DECREF(generator_heap->var_bar_repr);
    generator_heap->var_bar_repr = NULL;
    CHECK_OBJECT(generator_heap->var_thread);
    Py_DECREF(generator_heap->var_thread);
    generator_heap->var_thread = NULL;
    CHECK_OBJECT(generator_heap->var_event_renderer);
    Py_DECREF(generator_heap->var_event_renderer);
    generator_heap->var_event_renderer = NULL;
    CHECK_OBJECT(generator_heap->var_cond_refresh);
    Py_DECREF(generator_heap->var_cond_refresh);
    generator_heap->var_cond_refresh = NULL;
    CHECK_OBJECT(generator_heap->var_term);
    Py_DECREF(generator_heap->var_term);
    generator_heap->var_term = NULL;
    CHECK_OBJECT(generator_heap->var_hook_manager);
    Py_DECREF(generator_heap->var_hook_manager);
    generator_heap->var_hook_manager = NULL;
    Py_XDECREF(generator_heap->var_pause_monitoring);
    generator_heap->var_pause_monitoring = NULL;
    CHECK_OBJECT(generator_heap->var_gen_eta);
    Py_DECREF(generator_heap->var_gen_eta);
    generator_heap->var_gen_eta = NULL;
    CHECK_OBJECT(generator_heap->var_stats);
    Py_DECREF(generator_heap->var_stats);
    generator_heap->var_stats = NULL;
    CHECK_OBJECT(generator_heap->var_stats_end);
    Py_DECREF(generator_heap->var_stats_end);
    generator_heap->var_stats_end = NULL;
    CHECK_OBJECT(generator_heap->var_elapsed);
    Py_DECREF(generator_heap->var_elapsed);
    generator_heap->var_elapsed = NULL;
    CHECK_OBJECT(generator_heap->var_elapsed_end);
    Py_DECREF(generator_heap->var_elapsed_end);
    generator_heap->var_elapsed_end = NULL;
    CHECK_OBJECT(generator_heap->var_update_hook);
    Py_DECREF(generator_heap->var_update_hook);
    generator_heap->var_update_hook = NULL;
    CHECK_OBJECT(generator_heap->var_monitor);
    Py_DECREF(generator_heap->var_monitor);
    generator_heap->var_monitor = NULL;
    CHECK_OBJECT(generator_heap->var_monitor_end);
    Py_DECREF(generator_heap->var_monitor_end);
    generator_heap->var_monitor_end = NULL;
    CHECK_OBJECT(generator_heap->var_monitor_original);
    Py_DECREF(generator_heap->var_monitor_original);
    generator_heap->var_monitor_original = NULL;
    Py_XDECREF(generator_heap->var_local_copy);
    generator_heap->var_local_copy = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar_context,
        module_alive_progress$core$progress,
        mod_consts[1],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_cd08c996ba1d23dfc77e2db076ad0e2b,
        closure,
        4,
        sizeof(struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar_locals)
    );
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__1_run(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_spinner_player = python_pars[0];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_8921dd8bb1d829882d265940d988a261;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_8921dd8bb1d829882d265940d988a261 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8921dd8bb1d829882d265940d988a261)) {
        Py_XDECREF(cache_frame_8921dd8bb1d829882d265940d988a261);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8921dd8bb1d829882d265940d988a261 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8921dd8bb1d829882d265940d988a261 = MAKE_FUNCTION_FRAME(codeobj_8921dd8bb1d829882d265940d988a261, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8921dd8bb1d829882d265940d988a261->m_type_description == NULL);
    frame_8921dd8bb1d829882d265940d988a261 = cache_frame_8921dd8bb1d829882d265940d988a261;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8921dd8bb1d829882d265940d988a261);
    assert(Py_REFCNT(frame_8921dd8bb1d829882d265940d988a261) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "occcccc";
            goto try_except_handler_1;
        }

        tmp_assign_source_1 = Nuitka_Cell_GET(self->m_closure[1]);
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_1);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[98]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "occcccc";
            goto try_except_handler_1;
        }
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 109;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "occcccc";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[99]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "occcccc";
            goto try_except_handler_1;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_value_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_spinner_player);
        tmp_value_value_1 = par_spinner_player;
        tmp_args_element_value_1 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_args_element_value_1 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "occcccc";
            exception_lineno = 112;
            goto try_except_handler_3;
        }
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 112;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[101]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        tmp_truediv_expr_left_1 = mod_consts[34];
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[50]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 113;
        tmp_truediv_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 113;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 110;
        type_description_1 = "occcccc";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8921dd8bb1d829882d265940d988a261, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8921dd8bb1d829882d265940d988a261, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 113;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8921dd8bb1d829882d265940d988a261->m_frame) frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occcccc";
    goto try_except_handler_4;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 109;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8921dd8bb1d829882d265940d988a261->m_frame) frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occcccc";
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 113;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[103]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_8921dd8bb1d829882d265940d988a261->m_frame.f_lineno = 113;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[103]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "occcccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8921dd8bb1d829882d265940d988a261, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8921dd8bb1d829882d265940d988a261->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8921dd8bb1d829882d265940d988a261, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8921dd8bb1d829882d265940d988a261,
        type_description_1,
        par_spinner_player,
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[3],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_8921dd8bb1d829882d265940d988a261 == cache_frame_8921dd8bb1d829882d265940d988a261) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8921dd8bb1d829882d265940d988a261);
        cache_frame_8921dd8bb1d829882d265940d988a261 = NULL;
    }

    assertFrameObject(frame_8921dd8bb1d829882d265940d988a261);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_spinner_player);
    Py_DECREF(par_spinner_player);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_spinner_player);
    Py_DECREF(par_spinner_player);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__2_alive_repr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_spin = python_pars[0];
    PyObject *var_fragments = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_2f0268cb7eb246f60f3ab83b02e1c499;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_2f0268cb7eb246f60f3ab83b02e1c499 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f0268cb7eb246f60f3ab83b02e1c499)) {
        Py_XDECREF(cache_frame_2f0268cb7eb246f60f3ab83b02e1c499);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f0268cb7eb246f60f3ab83b02e1c499 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f0268cb7eb246f60f3ab83b02e1c499 = MAKE_FUNCTION_FRAME(codeobj_2f0268cb7eb246f60f3ab83b02e1c499, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f0268cb7eb246f60f3ab83b02e1c499->m_type_description == NULL);
    frame_2f0268cb7eb246f60f3ab83b02e1c499 = cache_frame_2f0268cb7eb246f60f3ab83b02e1c499;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f0268cb7eb246f60f3ab83b02e1c499);
    assert(Py_REFCNT(frame_2f0268cb7eb246f60f3ab83b02e1c499) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 116;
        tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[105]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 117;
        tmp_truediv_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ooccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[8]);
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
            if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[5]);
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }
            frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 119;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_spin);
            tmp_tuple_element_1 = par_spin;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 2, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[85]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[4]);
            frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 119;
            tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 3, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
            frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 120;
            tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 4, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_5 = Nuitka_Cell_GET(self->m_closure[6]);
            frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 120;
            tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 5, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[5]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[44]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "ooccccccccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_fragments == NULL);
        var_fragments = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_2;
        }

        tmp_assign_source_2 = Nuitka_Cell_GET(self->m_closure[1]);
        assert(tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_2);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_called_value_6 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[98]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_2;
        }
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 122;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_6 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[99]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_fragments);
        tmp_kw_call_arg_value_0_1 = var_fragments;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[7]);
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 123;
        tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[108]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[45]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[7]);
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 123;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[45], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[7]);
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 124;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[110]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2f0268cb7eb246f60f3ab83b02e1c499, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2f0268cb7eb246f60f3ab83b02e1c499, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 124;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame) frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooccccccccc";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 122;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame) frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooccccccccc";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 124;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[103]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 124;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_10 = tmp_with_1__exit;
        frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame.f_lineno = 124;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[103]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooccccccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f0268cb7eb246f60f3ab83b02e1c499, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f0268cb7eb246f60f3ab83b02e1c499->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f0268cb7eb246f60f3ab83b02e1c499, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f0268cb7eb246f60f3ab83b02e1c499,
        type_description_1,
        par_spin,
        var_fragments,
        self->m_closure[5],
        self->m_closure[2],
        self->m_closure[8],
        self->m_closure[0],
        self->m_closure[4],
        self->m_closure[3],
        self->m_closure[6],
        self->m_closure[1],
        self->m_closure[7]
    );


    // Release cached frame if used for exception.
    if (frame_2f0268cb7eb246f60f3ab83b02e1c499 == cache_frame_2f0268cb7eb246f60f3ab83b02e1c499) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f0268cb7eb246f60f3ab83b02e1c499);
        cache_frame_2f0268cb7eb246f60f3ab83b02e1c499 = NULL;
    }

    assertFrameObject(frame_2f0268cb7eb246f60f3ab83b02e1c499);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fragments);
    Py_DECREF(var_fragments);
    var_fragments = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fragments);
    var_fragments = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_spin);
    Py_DECREF(par_spin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_spin);
    Py_DECREF(par_spin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__3_set_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[0];
    struct Nuitka_FrameObject *frame_f3facf3172c58af7362fa40469fec4e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f3facf3172c58af7362fa40469fec4e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3facf3172c58af7362fa40469fec4e5)) {
        Py_XDECREF(cache_frame_f3facf3172c58af7362fa40469fec4e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3facf3172c58af7362fa40469fec4e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3facf3172c58af7362fa40469fec4e5 = MAKE_FUNCTION_FRAME(codeobj_f3facf3172c58af7362fa40469fec4e5, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3facf3172c58af7362fa40469fec4e5->m_type_description == NULL);
    frame_f3facf3172c58af7362fa40469fec4e5 = cache_frame_f3facf3172c58af7362fa40469fec4e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3facf3172c58af7362fa40469fec4e5);
    assert(Py_REFCNT(frame_f3facf3172c58af7362fa40469fec4e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_f3facf3172c58af7362fa40469fec4e5->m_frame.f_lineno = 129;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3facf3172c58af7362fa40469fec4e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3facf3172c58af7362fa40469fec4e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3facf3172c58af7362fa40469fec4e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3facf3172c58af7362fa40469fec4e5,
        type_description_1,
        par_message,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f3facf3172c58af7362fa40469fec4e5 == cache_frame_f3facf3172c58af7362fa40469fec4e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3facf3172c58af7362fa40469fec4e5);
        cache_frame_f3facf3172c58af7362fa40469fec4e5 = NULL;
    }

    assertFrameObject(frame_f3facf3172c58af7362fa40469fec4e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__4_bar_handle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_percent = python_pars[0];
    struct Nuitka_FrameObject *frame_8a021f24cf742770bc7e561745b52a13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8a021f24cf742770bc7e561745b52a13 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a021f24cf742770bc7e561745b52a13)) {
        Py_XDECREF(cache_frame_8a021f24cf742770bc7e561745b52a13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a021f24cf742770bc7e561745b52a13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a021f24cf742770bc7e561745b52a13 = MAKE_FUNCTION_FRAME(codeobj_8a021f24cf742770bc7e561745b52a13, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a021f24cf742770bc7e561745b52a13->m_type_description == NULL);
    frame_8a021f24cf742770bc7e561745b52a13 = cache_frame_8a021f24cf742770bc7e561745b52a13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a021f24cf742770bc7e561745b52a13);
    assert(Py_REFCNT(frame_8a021f24cf742770bc7e561745b52a13) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_8a021f24cf742770bc7e561745b52a13->m_frame.f_lineno = 133;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[113]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[114]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[42];
        CHECK_OBJECT(par_percent);
        tmp_float_arg_1 = par_percent;
        tmp_args_element_value_2 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        frame_8a021f24cf742770bc7e561745b52a13->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_8a021f24cf742770bc7e561745b52a13->m_frame.f_lineno = 135;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a021f24cf742770bc7e561745b52a13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a021f24cf742770bc7e561745b52a13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a021f24cf742770bc7e561745b52a13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a021f24cf742770bc7e561745b52a13,
        type_description_1,
        par_percent,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_8a021f24cf742770bc7e561745b52a13 == cache_frame_8a021f24cf742770bc7e561745b52a13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a021f24cf742770bc7e561745b52a13);
        cache_frame_8a021f24cf742770bc7e561745b52a13 = NULL;
    }

    assertFrameObject(frame_8a021f24cf742770bc7e561745b52a13);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_percent);
    Py_DECREF(par_percent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_percent);
    Py_DECREF(par_percent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__5_bar_handle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_count = python_pars[0];
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_51c0e7f267aabe842960a96b65c554e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_51c0e7f267aabe842960a96b65c554e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51c0e7f267aabe842960a96b65c554e5)) {
        Py_XDECREF(cache_frame_51c0e7f267aabe842960a96b65c554e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51c0e7f267aabe842960a96b65c554e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51c0e7f267aabe842960a96b65c554e5 = MAKE_FUNCTION_FRAME(codeobj_51c0e7f267aabe842960a96b65c554e5, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51c0e7f267aabe842960a96b65c554e5->m_type_description == NULL);
    frame_51c0e7f267aabe842960a96b65c554e5 = cache_frame_51c0e7f267aabe842960a96b65c554e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51c0e7f267aabe842960a96b65c554e5);
    assert(Py_REFCNT(frame_51c0e7f267aabe842960a96b65c554e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_51c0e7f267aabe842960a96b65c554e5->m_frame.f_lineno = 138;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[113]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[114]);
        assert(tmp_called_value_1 != NULL);
        tmp_args_element_value_1 = mod_consts[10];
        CHECK_OBJECT(par_count);
        tmp_int_arg_1 = par_count;
        tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        frame_51c0e7f267aabe842960a96b65c554e5->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "occc";
            goto try_except_handler_1;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_51c0e7f267aabe842960a96b65c554e5->m_frame.f_lineno = 140;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51c0e7f267aabe842960a96b65c554e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51c0e7f267aabe842960a96b65c554e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51c0e7f267aabe842960a96b65c554e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51c0e7f267aabe842960a96b65c554e5,
        type_description_1,
        par_count,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_51c0e7f267aabe842960a96b65c554e5 == cache_frame_51c0e7f267aabe842960a96b65c554e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51c0e7f267aabe842960a96b65c554e5);
        cache_frame_51c0e7f267aabe842960a96b65c554e5 = NULL;
    }

    assertFrameObject(frame_51c0e7f267aabe842960a96b65c554e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_count);
    Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__6_start_monitoring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_offset = python_pars[0];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6d7a2318bc0312ce717c0dc0c1ec23e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8)) {
        Py_XDECREF(cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8 = MAKE_FUNCTION_FRAME(codeobj_6d7a2318bc0312ce717c0dc0c1ec23e8, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8->m_type_description == NULL);
    frame_6d7a2318bc0312ce717c0dc0c1ec23e8 = cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d7a2318bc0312ce717c0dc0c1ec23e8);
    assert(Py_REFCNT(frame_6d7a2318bc0312ce717c0dc0c1ec23e8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[6]);
        frame_6d7a2318bc0312ce717c0dc0c1ec23e8->m_frame.f_lineno = 143;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[115]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_6d7a2318bc0312ce717c0dc0c1ec23e8->m_frame.f_lineno = 144;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[116]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "occccccc";
            goto try_except_handler_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "occccccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[5]);
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "occccccc";
            exception_lineno = 145;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "occccccc";
            exception_lineno = 145;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "occccccc";
                    exception_lineno = 145;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[31];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "occccccc";
            exception_lineno = 145;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "occccccc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[118], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "occccccc";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "occccccc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "occccccc";
            goto try_except_handler_1;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        frame_6d7a2318bc0312ce717c0dc0c1ec23e8->m_frame.f_lineno = 146;
        tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[105]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_offset);
        tmp_sub_expr_right_1 = par_offset;
        tmp_assattr_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[51], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_6d7a2318bc0312ce717c0dc0c1ec23e8->m_frame.f_lineno = 147;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[119]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d7a2318bc0312ce717c0dc0c1ec23e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d7a2318bc0312ce717c0dc0c1ec23e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d7a2318bc0312ce717c0dc0c1ec23e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d7a2318bc0312ce717c0dc0c1ec23e8,
        type_description_1,
        par_offset,
        self->m_closure[6],
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[5],
        self->m_closure[0],
        self->m_closure[4],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_6d7a2318bc0312ce717c0dc0c1ec23e8 == cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8);
        cache_frame_6d7a2318bc0312ce717c0dc0c1ec23e8 = NULL;
    }

    assertFrameObject(frame_6d7a2318bc0312ce717c0dc0c1ec23e8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_offset);
    Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__7_stop_monitoring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3903c7266ada5fb289b43fe221177cd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3903c7266ada5fb289b43fe221177cd0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3903c7266ada5fb289b43fe221177cd0)) {
        Py_XDECREF(cache_frame_3903c7266ada5fb289b43fe221177cd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3903c7266ada5fb289b43fe221177cd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3903c7266ada5fb289b43fe221177cd0 = MAKE_FUNCTION_FRAME(codeobj_3903c7266ada5fb289b43fe221177cd0, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3903c7266ada5fb289b43fe221177cd0->m_type_description == NULL);
    frame_3903c7266ada5fb289b43fe221177cd0 = cache_frame_3903c7266ada5fb289b43fe221177cd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3903c7266ada5fb289b43fe221177cd0);
    assert(Py_REFCNT(frame_3903c7266ada5fb289b43fe221177cd0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_3903c7266ada5fb289b43fe221177cd0->m_frame.f_lineno = 150;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[120]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_3903c7266ada5fb289b43fe221177cd0->m_frame.f_lineno = 151;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[121]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "cccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "cccc";
            exception_lineno = 152;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "cccc";
            exception_lineno = 152;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "cccc";
                    exception_lineno = 152;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[31];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "cccc";
            exception_lineno = 152;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[118], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[44], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "cccc";
            goto try_except_handler_1;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        frame_3903c7266ada5fb289b43fe221177cd0->m_frame.f_lineno = 153;
        tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[105]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 153;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3903c7266ada5fb289b43fe221177cd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3903c7266ada5fb289b43fe221177cd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3903c7266ada5fb289b43fe221177cd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3903c7266ada5fb289b43fe221177cd0,
        type_description_1,
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_3903c7266ada5fb289b43fe221177cd0 == cache_frame_3903c7266ada5fb289b43fe221177cd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3903c7266ada5fb289b43fe221177cd0);
        cache_frame_3903c7266ada5fb289b43fe221177cd0 = NULL;
    }

    assertFrameObject(frame_3903c7266ada5fb289b43fe221177cd0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__8_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_208c8b4e44d67c0dad0456fa54bb5483;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_208c8b4e44d67c0dad0456fa54bb5483 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_208c8b4e44d67c0dad0456fa54bb5483)) {
        Py_XDECREF(cache_frame_208c8b4e44d67c0dad0456fa54bb5483);

#if _DEBUG_REFCOUNTS
        if (cache_frame_208c8b4e44d67c0dad0456fa54bb5483 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_208c8b4e44d67c0dad0456fa54bb5483 = MAKE_FUNCTION_FRAME(codeobj_208c8b4e44d67c0dad0456fa54bb5483, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_208c8b4e44d67c0dad0456fa54bb5483->m_type_description == NULL);
    frame_208c8b4e44d67c0dad0456fa54bb5483 = cache_frame_208c8b4e44d67c0dad0456fa54bb5483;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_208c8b4e44d67c0dad0456fa54bb5483);
    assert(Py_REFCNT(frame_208c8b4e44d67c0dad0456fa54bb5483) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_208c8b4e44d67c0dad0456fa54bb5483, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_208c8b4e44d67c0dad0456fa54bb5483->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_208c8b4e44d67c0dad0456fa54bb5483, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_208c8b4e44d67c0dad0456fa54bb5483,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_208c8b4e44d67c0dad0456fa54bb5483 == cache_frame_208c8b4e44d67c0dad0456fa54bb5483) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_208c8b4e44d67c0dad0456fa54bb5483);
        cache_frame_208c8b4e44d67c0dad0456fa54bb5483 = NULL;
    }

    assertFrameObject(frame_208c8b4e44d67c0dad0456fa54bb5483);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__9_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_424490a95e5f8d21758281fe144d93f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_424490a95e5f8d21758281fe144d93f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_424490a95e5f8d21758281fe144d93f2)) {
        Py_XDECREF(cache_frame_424490a95e5f8d21758281fe144d93f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_424490a95e5f8d21758281fe144d93f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_424490a95e5f8d21758281fe144d93f2 = MAKE_FUNCTION_FRAME(codeobj_424490a95e5f8d21758281fe144d93f2, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_424490a95e5f8d21758281fe144d93f2->m_type_description == NULL);
    frame_424490a95e5f8d21758281fe144d93f2 = cache_frame_424490a95e5f8d21758281fe144d93f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_424490a95e5f8d21758281fe144d93f2);
    assert(Py_REFCNT(frame_424490a95e5f8d21758281fe144d93f2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_424490a95e5f8d21758281fe144d93f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_424490a95e5f8d21758281fe144d93f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_424490a95e5f8d21758281fe144d93f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_424490a95e5f8d21758281fe144d93f2,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_424490a95e5f8d21758281fe144d93f2 == cache_frame_424490a95e5f8d21758281fe144d93f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_424490a95e5f8d21758281fe144d93f2);
        cache_frame_424490a95e5f8d21758281fe144d93f2 = NULL;
    }

    assertFrameObject(frame_424490a95e5f8d21758281fe144d93f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[2];
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = self->m_closure[3];
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = self->m_closure[4];
        Py_INCREF(tmp_closure_1[4]);

        tmp_return_value = MAKE_GENERATOR_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring_locals {
    PyObject *var_offset;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};

static PyObject *alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring_locals *generator_heap = (struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_offset = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fcc3c77b47123adcc030d5c350e4a4c0, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[100]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 178;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[122]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 178;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 178;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 178;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[27]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(generator->m_closure[3]);
        generator->m_frame->m_frame.f_lineno = 179;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_offset == NULL);
        generator_heap->var_offset = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[14]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 180;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[61]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[4]);
        generator->m_frame->m_frame.f_lineno = 181;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[95],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 181;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_2 = Py_None;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "occccc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "occccc";
            goto try_except_handler_3;
        }

        tmp_called_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
        CHECK_OBJECT(generator_heap->var_offset);
        tmp_args_element_value_1 = generator_heap->var_offset;
        generator->m_frame->m_frame.f_lineno = 185;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "occccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 182;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "occccc";
    goto try_except_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[25]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_5 = Nuitka_Cell_GET(generator->m_closure[2]);
        CHECK_OBJECT(generator_heap->var_offset);
        tmp_args_element_value_2 = generator_heap->var_offset;
        generator->m_frame->m_frame.f_lineno = 185;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "occccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator_heap->var_offset,
            generator->m_closure[1],
            generator->m_closure[3],
            generator->m_closure[0],
            generator->m_closure[4],
            generator->m_closure[2]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_offset);
    generator_heap->var_offset = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->var_offset);
    Py_DECREF(generator_heap->var_offset);
    generator_heap->var_offset = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring_context,
        module_alive_progress$core$progress,
        mod_consts[64],
#if PYTHON_VERSION >= 0x350
        mod_consts[65],
#endif
        codeobj_fcc3c77b47123adcc030d5c350e4a4c0,
        closure,
        5,
        sizeof(struct alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring$$$genobj__1_pause_monitoring_locals)
    );
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__11_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_eta = NULL;
    struct Nuitka_FrameObject *frame_4c2708df6541adac9bf2ff7e281e9932;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4c2708df6541adac9bf2ff7e281e9932 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c2708df6541adac9bf2ff7e281e9932)) {
        Py_XDECREF(cache_frame_4c2708df6541adac9bf2ff7e281e9932);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c2708df6541adac9bf2ff7e281e9932 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c2708df6541adac9bf2ff7e281e9932 = MAKE_FUNCTION_FRAME(codeobj_4c2708df6541adac9bf2ff7e281e9932, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c2708df6541adac9bf2ff7e281e9932->m_type_description == NULL);
    frame_4c2708df6541adac9bf2ff7e281e9932 = cache_frame_4c2708df6541adac9bf2ff7e281e9932;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c2708df6541adac9bf2ff7e281e9932);
    assert(Py_REFCNT(frame_4c2708df6541adac9bf2ff7e281e9932) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_4c2708df6541adac9bf2ff7e281e9932->m_frame.f_lineno = 197;
        tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 197;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[50]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_1 = "occcc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_4c2708df6541adac9bf2ff7e281e9932->m_frame.f_lineno = 197;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        frame_4c2708df6541adac9bf2ff7e281e9932->m_frame.f_lineno = 197;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        assert(var_eta == NULL);
        var_eta = tmp_assign_source_1;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[125];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 198;
                type_description_1 = "occcc";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[3]);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[50]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "occcc";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = mod_consts[126];
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
                if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[127]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 198;
                    type_description_1 = "occcc";
                    goto tuple_build_exception_3;
                }

                tmp_format_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
                tmp_format_spec_2 = mod_consts[8];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_1 = "occcc";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_format_value_1);
            Py_DECREF(tmp_string_concat_values_2);
            goto tuple_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_format_spec_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_format_spec_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_format_value_1);

                exception_lineno = 198;
                type_description_1 = "occcc";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            Py_DECREF(tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "occcc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_eta);
            tmp_format_value_3 = var_eta;
            tmp_format_spec_3 = mod_consts[8];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "occcc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[129];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c2708df6541adac9bf2ff7e281e9932, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c2708df6541adac9bf2ff7e281e9932->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c2708df6541adac9bf2ff7e281e9932, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c2708df6541adac9bf2ff7e281e9932,
        type_description_1,
        var_eta,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[3],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_4c2708df6541adac9bf2ff7e281e9932 == cache_frame_4c2708df6541adac9bf2ff7e281e9932) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c2708df6541adac9bf2ff7e281e9932);
        cache_frame_4c2708df6541adac9bf2ff7e281e9932 = NULL;
    }

    assertFrameObject(frame_4c2708df6541adac9bf2ff7e281e9932);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_eta);
    Py_DECREF(var_eta);
    var_eta = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_eta);
    var_eta = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__12_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ccd670ea3ccb0563131decf88aa74bd7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ccd670ea3ccb0563131decf88aa74bd7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ccd670ea3ccb0563131decf88aa74bd7)) {
        Py_XDECREF(cache_frame_ccd670ea3ccb0563131decf88aa74bd7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ccd670ea3ccb0563131decf88aa74bd7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ccd670ea3ccb0563131decf88aa74bd7 = MAKE_FUNCTION_FRAME(codeobj_ccd670ea3ccb0563131decf88aa74bd7, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ccd670ea3ccb0563131decf88aa74bd7->m_type_description == NULL);
    frame_ccd670ea3ccb0563131decf88aa74bd7 = cache_frame_ccd670ea3ccb0563131decf88aa74bd7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ccd670ea3ccb0563131decf88aa74bd7);
    assert(Py_REFCNT(frame_ccd670ea3ccb0563131decf88aa74bd7) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[125];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 203;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[130];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[131];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ccd670ea3ccb0563131decf88aa74bd7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ccd670ea3ccb0563131decf88aa74bd7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ccd670ea3ccb0563131decf88aa74bd7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ccd670ea3ccb0563131decf88aa74bd7,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ccd670ea3ccb0563131decf88aa74bd7 == cache_frame_ccd670ea3ccb0563131decf88aa74bd7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ccd670ea3ccb0563131decf88aa74bd7);
        cache_frame_ccd670ea3ccb0563131decf88aa74bd7 = NULL;
    }

    assertFrameObject(frame_ccd670ea3ccb0563131decf88aa74bd7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__13_stats_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_87b9944f884500bb1949a3bf5628e351;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87b9944f884500bb1949a3bf5628e351 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87b9944f884500bb1949a3bf5628e351)) {
        Py_XDECREF(cache_frame_87b9944f884500bb1949a3bf5628e351);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87b9944f884500bb1949a3bf5628e351 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87b9944f884500bb1949a3bf5628e351 = MAKE_FUNCTION_FRAME(codeobj_87b9944f884500bb1949a3bf5628e351, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87b9944f884500bb1949a3bf5628e351->m_type_description == NULL);
    frame_87b9944f884500bb1949a3bf5628e351 = cache_frame_87b9944f884500bb1949a3bf5628e351;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87b9944f884500bb1949a3bf5628e351);
    assert(Py_REFCNT(frame_87b9944f884500bb1949a3bf5628e351) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[125];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 206;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[50]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = mod_consts[132];
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[127]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 206;
                    type_description_1 = "cc";
                    goto tuple_build_exception_2;
                }

                tmp_format_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
                tmp_format_spec_2 = mod_consts[8];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "cc";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_format_value_1);
            Py_DECREF(tmp_string_concat_values_2);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_format_spec_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_format_spec_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_format_value_1);

                exception_lineno = 206;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            Py_DECREF(tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[131];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_87b9944f884500bb1949a3bf5628e351, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87b9944f884500bb1949a3bf5628e351->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87b9944f884500bb1949a3bf5628e351, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87b9944f884500bb1949a3bf5628e351,
        type_description_1,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_87b9944f884500bb1949a3bf5628e351 == cache_frame_87b9944f884500bb1949a3bf5628e351) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87b9944f884500bb1949a3bf5628e351);
        cache_frame_87b9944f884500bb1949a3bf5628e351 = NULL;
    }

    assertFrameObject(frame_87b9944f884500bb1949a3bf5628e351);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__14_elapsed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8f0a0c08a68eee0b5c65a33055565ee2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f0a0c08a68eee0b5c65a33055565ee2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f0a0c08a68eee0b5c65a33055565ee2)) {
        Py_XDECREF(cache_frame_8f0a0c08a68eee0b5c65a33055565ee2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f0a0c08a68eee0b5c65a33055565ee2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f0a0c08a68eee0b5c65a33055565ee2 = MAKE_FUNCTION_FRAME(codeobj_8f0a0c08a68eee0b5c65a33055565ee2, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f0a0c08a68eee0b5c65a33055565ee2->m_type_description == NULL);
    frame_8f0a0c08a68eee0b5c65a33055565ee2 = cache_frame_8f0a0c08a68eee0b5c65a33055565ee2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f0a0c08a68eee0b5c65a33055565ee2);
    assert(Py_REFCNT(frame_8f0a0c08a68eee0b5c65a33055565ee2) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[133];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = Py_False;
            frame_8f0a0c08a68eee0b5c65a33055565ee2->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_format_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_args_element_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f0a0c08a68eee0b5c65a33055565ee2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f0a0c08a68eee0b5c65a33055565ee2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f0a0c08a68eee0b5c65a33055565ee2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f0a0c08a68eee0b5c65a33055565ee2,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8f0a0c08a68eee0b5c65a33055565ee2 == cache_frame_8f0a0c08a68eee0b5c65a33055565ee2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f0a0c08a68eee0b5c65a33055565ee2);
        cache_frame_8f0a0c08a68eee0b5c65a33055565ee2 = NULL;
    }

    assertFrameObject(frame_8f0a0c08a68eee0b5c65a33055565ee2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__15_elapsed_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a15278d694d70f8c5c3bd5dc11e40b2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f)) {
        Py_XDECREF(cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f = MAKE_FUNCTION_FRAME(codeobj_a15278d694d70f8c5c3bd5dc11e40b2f, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f->m_type_description == NULL);
    frame_a15278d694d70f8c5c3bd5dc11e40b2f = cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a15278d694d70f8c5c3bd5dc11e40b2f);
    assert(Py_REFCNT(frame_a15278d694d70f8c5c3bd5dc11e40b2f) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[133];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 212;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_args_element_value_2 = Py_True;
            frame_a15278d694d70f8c5c3bd5dc11e40b2f->m_frame.f_lineno = 212;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_format_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_args_element_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a15278d694d70f8c5c3bd5dc11e40b2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a15278d694d70f8c5c3bd5dc11e40b2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a15278d694d70f8c5c3bd5dc11e40b2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a15278d694d70f8c5c3bd5dc11e40b2f,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a15278d694d70f8c5c3bd5dc11e40b2f == cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f);
        cache_frame_a15278d694d70f8c5c3bd5dc11e40b2f = NULL;
    }

    assertFrameObject(frame_a15278d694d70f8c5c3bd5dc11e40b2f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__16_update_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_5d3262c327381e6d1cb059703214c058;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5d3262c327381e6d1cb059703214c058 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d3262c327381e6d1cb059703214c058)) {
        Py_XDECREF(cache_frame_5d3262c327381e6d1cb059703214c058);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d3262c327381e6d1cb059703214c058 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d3262c327381e6d1cb059703214c058 = MAKE_FUNCTION_FRAME(codeobj_5d3262c327381e6d1cb059703214c058, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d3262c327381e6d1cb059703214c058->m_type_description == NULL);
    frame_5d3262c327381e6d1cb059703214c058 = cache_frame_5d3262c327381e6d1cb059703214c058;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d3262c327381e6d1cb059703214c058);
    assert(Py_REFCNT(frame_5d3262c327381e6d1cb059703214c058) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[136]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_5d3262c327381e6d1cb059703214c058->m_frame.f_lineno = 217;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d3262c327381e6d1cb059703214c058, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d3262c327381e6d1cb059703214c058->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d3262c327381e6d1cb059703214c058, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d3262c327381e6d1cb059703214c058,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_5d3262c327381e6d1cb059703214c058 == cache_frame_5d3262c327381e6d1cb059703214c058) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d3262c327381e6d1cb059703214c058);
        cache_frame_5d3262c327381e6d1cb059703214c058 = NULL;
    }

    assertFrameObject(frame_5d3262c327381e6d1cb059703214c058);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__17_update_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0e617336b7a52e0b9b920adaf818556c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0e617336b7a52e0b9b920adaf818556c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e617336b7a52e0b9b920adaf818556c)) {
        Py_XDECREF(cache_frame_0e617336b7a52e0b9b920adaf818556c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e617336b7a52e0b9b920adaf818556c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e617336b7a52e0b9b920adaf818556c = MAKE_FUNCTION_FRAME(codeobj_0e617336b7a52e0b9b920adaf818556c, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e617336b7a52e0b9b920adaf818556c->m_type_description == NULL);
    frame_0e617336b7a52e0b9b920adaf818556c = cache_frame_0e617336b7a52e0b9b920adaf818556c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e617336b7a52e0b9b920adaf818556c);
    assert(Py_REFCNT(frame_0e617336b7a52e0b9b920adaf818556c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assattr_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e617336b7a52e0b9b920adaf818556c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e617336b7a52e0b9b920adaf818556c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e617336b7a52e0b9b920adaf818556c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e617336b7a52e0b9b920adaf818556c,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_0e617336b7a52e0b9b920adaf818556c == cache_frame_0e617336b7a52e0b9b920adaf818556c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e617336b7a52e0b9b920adaf818556c);
        cache_frame_0e617336b7a52e0b9b920adaf818556c = NULL;
    }

    assertFrameObject(frame_0e617336b7a52e0b9b920adaf818556c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__18_monitor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_167590a21031152e523238bbe4dd29d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_167590a21031152e523238bbe4dd29d3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_167590a21031152e523238bbe4dd29d3)) {
        Py_XDECREF(cache_frame_167590a21031152e523238bbe4dd29d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_167590a21031152e523238bbe4dd29d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_167590a21031152e523238bbe4dd29d3 = MAKE_FUNCTION_FRAME(codeobj_167590a21031152e523238bbe4dd29d3, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_167590a21031152e523238bbe4dd29d3->m_type_description == NULL);
    frame_167590a21031152e523238bbe4dd29d3 = cache_frame_167590a21031152e523238bbe4dd29d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_167590a21031152e523238bbe4dd29d3);
    assert(Py_REFCNT(frame_167590a21031152e523238bbe4dd29d3) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[8];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 223;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[138];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 223;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[139];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_167590a21031152e523238bbe4dd29d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_167590a21031152e523238bbe4dd29d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_167590a21031152e523238bbe4dd29d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_167590a21031152e523238bbe4dd29d3,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_167590a21031152e523238bbe4dd29d3 == cache_frame_167590a21031152e523238bbe4dd29d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_167590a21031152e523238bbe4dd29d3);
        cache_frame_167590a21031152e523238bbe4dd29d3 = NULL;
    }

    assertFrameObject(frame_167590a21031152e523238bbe4dd29d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__19_monitor_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_warning = NULL;
    struct Nuitka_FrameObject *frame_41b65bd192e6a5d1560731bbce836813;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_41b65bd192e6a5d1560731bbce836813 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_41b65bd192e6a5d1560731bbce836813)) {
        Py_XDECREF(cache_frame_41b65bd192e6a5d1560731bbce836813);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41b65bd192e6a5d1560731bbce836813 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41b65bd192e6a5d1560731bbce836813 = MAKE_FUNCTION_FRAME(codeobj_41b65bd192e6a5d1560731bbce836813, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41b65bd192e6a5d1560731bbce836813->m_type_description == NULL);
    frame_41b65bd192e6a5d1560731bbce836813 = cache_frame_41b65bd192e6a5d1560731bbce836813;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41b65bd192e6a5d1560731bbce836813);
    assert(Py_REFCNT(frame_41b65bd192e6a5d1560731bbce836813) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[141];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[8];
        condexpr_end_1:;
        assert(var_warning == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_warning = tmp_assign_source_1;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_warning);
        tmp_tuple_element_1 = var_warning;
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[142]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 227;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
            frame_41b65bd192e6a5d1560731bbce836813->m_frame.f_lineno = 227;
            tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "occc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41b65bd192e6a5d1560731bbce836813, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41b65bd192e6a5d1560731bbce836813->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41b65bd192e6a5d1560731bbce836813, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41b65bd192e6a5d1560731bbce836813,
        type_description_1,
        var_warning,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_41b65bd192e6a5d1560731bbce836813 == cache_frame_41b65bd192e6a5d1560731bbce836813) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41b65bd192e6a5d1560731bbce836813);
        cache_frame_41b65bd192e6a5d1560731bbce836813 = NULL;
    }

    assertFrameObject(frame_41b65bd192e6a5d1560731bbce836813);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_warning);
    Py_DECREF(var_warning);
    var_warning = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_warning);
    var_warning = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__21_monitor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_64b6045eef313df5e09698aa242578ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64b6045eef313df5e09698aa242578ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_64b6045eef313df5e09698aa242578ae)) {
        Py_XDECREF(cache_frame_64b6045eef313df5e09698aa242578ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64b6045eef313df5e09698aa242578ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64b6045eef313df5e09698aa242578ae = MAKE_FUNCTION_FRAME(codeobj_64b6045eef313df5e09698aa242578ae, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64b6045eef313df5e09698aa242578ae->m_type_description == NULL);
    frame_64b6045eef313df5e09698aa242578ae = cache_frame_64b6045eef313df5e09698aa242578ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64b6045eef313df5e09698aa242578ae);
    assert(Py_REFCNT(frame_64b6045eef313df5e09698aa242578ae) == 2);

    // Framed code:
    {
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[139];
        tmp_return_value = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64b6045eef313df5e09698aa242578ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64b6045eef313df5e09698aa242578ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64b6045eef313df5e09698aa242578ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64b6045eef313df5e09698aa242578ae,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_64b6045eef313df5e09698aa242578ae == cache_frame_64b6045eef313df5e09698aa242578ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64b6045eef313df5e09698aa242578ae);
        cache_frame_64b6045eef313df5e09698aa242578ae = NULL;
    }

    assertFrameObject(frame_64b6045eef313df5e09698aa242578ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__22_monitor_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_warning = NULL;
    struct Nuitka_FrameObject *frame_dbcb1f4149cb2483f6486c0697555fe2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dbcb1f4149cb2483f6486c0697555fe2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dbcb1f4149cb2483f6486c0697555fe2)) {
        Py_XDECREF(cache_frame_dbcb1f4149cb2483f6486c0697555fe2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dbcb1f4149cb2483f6486c0697555fe2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dbcb1f4149cb2483f6486c0697555fe2 = MAKE_FUNCTION_FRAME(codeobj_dbcb1f4149cb2483f6486c0697555fe2, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dbcb1f4149cb2483f6486c0697555fe2->m_type_description == NULL);
    frame_dbcb1f4149cb2483f6486c0697555fe2 = cache_frame_dbcb1f4149cb2483f6486c0697555fe2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dbcb1f4149cb2483f6486c0697555fe2);
    assert(Py_REFCNT(frame_dbcb1f4149cb2483f6486c0697555fe2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[34];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[141];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[8];
        condexpr_end_1:;
        assert(var_warning == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_warning = tmp_assign_source_1;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_warning);
        tmp_tuple_element_1 = var_warning;
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[142]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 238;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }

            tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
            frame_dbcb1f4149cb2483f6486c0697555fe2->m_frame.f_lineno = 238;
            tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dbcb1f4149cb2483f6486c0697555fe2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dbcb1f4149cb2483f6486c0697555fe2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dbcb1f4149cb2483f6486c0697555fe2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dbcb1f4149cb2483f6486c0697555fe2,
        type_description_1,
        var_warning,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_dbcb1f4149cb2483f6486c0697555fe2 == cache_frame_dbcb1f4149cb2483f6486c0697555fe2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dbcb1f4149cb2483f6486c0697555fe2);
        cache_frame_dbcb1f4149cb2483f6486c0697555fe2 = NULL;
    }

    assertFrameObject(frame_dbcb1f4149cb2483f6486c0697555fe2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_warning);
    Py_DECREF(var_warning);
    var_warning = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_warning);
    var_warning = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__23_monitor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7846c8876b7382d4fe0b1fe601d93e04;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7846c8876b7382d4fe0b1fe601d93e04 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7846c8876b7382d4fe0b1fe601d93e04)) {
        Py_XDECREF(cache_frame_7846c8876b7382d4fe0b1fe601d93e04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7846c8876b7382d4fe0b1fe601d93e04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7846c8876b7382d4fe0b1fe601d93e04 = MAKE_FUNCTION_FRAME(codeobj_7846c8876b7382d4fe0b1fe601d93e04, module_alive_progress$core$progress, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7846c8876b7382d4fe0b1fe601d93e04->m_type_description == NULL);
    frame_7846c8876b7382d4fe0b1fe601d93e04 = cache_frame_7846c8876b7382d4fe0b1fe601d93e04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7846c8876b7382d4fe0b1fe601d93e04);
    assert(Py_REFCNT(frame_7846c8876b7382d4fe0b1fe601d93e04) == 2);

    // Framed code:
    {
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[8];
        tmp_return_value = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7846c8876b7382d4fe0b1fe601d93e04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7846c8876b7382d4fe0b1fe601d93e04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7846c8876b7382d4fe0b1fe601d93e04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7846c8876b7382d4fe0b1fe601d93e04,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_7846c8876b7382d4fe0b1fe601d93e04 == cache_frame_7846c8876b7382d4fe0b1fe601d93e04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7846c8876b7382d4fe0b1fe601d93e04);
        cache_frame_7846c8876b7382d4fe0b1fe601d93e04 = NULL;
    }

    assertFrameObject(frame_7846c8876b7382d4fe0b1fe601d93e04);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__3___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_0e976e23436f2b3c2f41eaac1e31a9d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3)) {
        Py_XDECREF(cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3 = MAKE_FUNCTION_FRAME(codeobj_0e976e23436f2b3c2f41eaac1e31a9d3, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3->m_type_description == NULL);
    frame_0e976e23436f2b3c2f41eaac1e31a9d3 = cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e976e23436f2b3c2f41eaac1e31a9d3);
    assert(Py_REFCNT(frame_0e976e23436f2b3c2f41eaac1e31a9d3) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[118]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e976e23436f2b3c2f41eaac1e31a9d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e976e23436f2b3c2f41eaac1e31a9d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e976e23436f2b3c2f41eaac1e31a9d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e976e23436f2b3c2f41eaac1e31a9d3,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_0e976e23436f2b3c2f41eaac1e31a9d3 == cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3);
        cache_frame_0e976e23436f2b3c2f41eaac1e31a9d3 = NULL;
    }

    assertFrameObject(frame_0e976e23436f2b3c2f41eaac1e31a9d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__4__create_bars(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_local_config = python_pars[0];
    PyObject *var_bar = NULL;
    PyObject *var_obj = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_937abcb7e384345aecb5a1255671217f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_937abcb7e384345aecb5a1255671217f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_937abcb7e384345aecb5a1255671217f)) {
        Py_XDECREF(cache_frame_937abcb7e384345aecb5a1255671217f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_937abcb7e384345aecb5a1255671217f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_937abcb7e384345aecb5a1255671217f = MAKE_FUNCTION_FRAME(codeobj_937abcb7e384345aecb5a1255671217f, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_937abcb7e384345aecb5a1255671217f->m_type_description == NULL);
    frame_937abcb7e384345aecb5a1255671217f = cache_frame_937abcb7e384345aecb5a1255671217f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_937abcb7e384345aecb5a1255671217f);
    assert(Py_REFCNT(frame_937abcb7e384345aecb5a1255671217f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_local_config);
        tmp_expression_value_1 = par_local_config;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[117]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_bar == NULL);
        var_bar = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_bar);
        tmp_cmp_expr_left_1 = var_bar;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_2 == NULL)) {
            tmp_assign_source_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_obj = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_obj);
        tmp_tuple_element_1 = var_obj;
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_obj);
        tmp_tuple_element_1 = var_obj;
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 281;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 281;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooo";
                    exception_lineno = 281;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[31];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 281;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT(var_obj);
        tmp_assattr_target_1 = var_obj;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[77], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(var_obj);
        tmp_assattr_target_2 = var_obj;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[93], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT(var_obj);
    tmp_return_value = var_obj;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_bar);
        tmp_called_value_1 = var_bar;
        CHECK_OBJECT(par_local_config);
        tmp_expression_value_2 = par_local_config;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[143]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_local_config);
        tmp_expression_value_3 = par_local_config;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[77]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_937abcb7e384345aecb5a1255671217f->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_937abcb7e384345aecb5a1255671217f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_937abcb7e384345aecb5a1255671217f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_937abcb7e384345aecb5a1255671217f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_937abcb7e384345aecb5a1255671217f,
        type_description_1,
        par_local_config,
        var_bar,
        var_obj
    );


    // Release cached frame if used for exception.
    if (frame_937abcb7e384345aecb5a1255671217f == cache_frame_937abcb7e384345aecb5a1255671217f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_937abcb7e384345aecb5a1255671217f);
        cache_frame_937abcb7e384345aecb5a1255671217f = NULL;
    }

    assertFrameObject(frame_937abcb7e384345aecb5a1255671217f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_bar);
    var_bar = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_bar);
    var_bar = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_local_config);
    Py_DECREF(par_local_config);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_local_config);
    Py_DECREF(par_local_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__5__create_spinner_player(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_local_config = python_pars[0];
    PyObject *var_spinner = NULL;
    PyObject *var_repeat = NULL;
    PyObject *var_spinner_player = NULL;
    struct Nuitka_FrameObject *frame_b3ca88d739a0d2d089d3ac29aaaba58d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d)) {
        Py_XDECREF(cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d = MAKE_FUNCTION_FRAME(codeobj_b3ca88d739a0d2d089d3ac29aaaba58d, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_type_description == NULL);
    frame_b3ca88d739a0d2d089d3ac29aaaba58d = cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3ca88d739a0d2d089d3ac29aaaba58d);
    assert(Py_REFCNT(frame_b3ca88d739a0d2d089d3ac29aaaba58d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_local_config);
        tmp_expression_value_1 = par_local_config;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[144]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_spinner == NULL);
        var_spinner = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_spinner);
        tmp_cmp_expr_left_1 = var_spinner;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[145];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[146];
        tmp_level_value_1 = mod_consts[10];
        frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_frame.f_lineno = 289;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[147],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_repeat == NULL);
        var_repeat = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_repeat);
        tmp_called_value_1 = var_repeat;
        frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_frame.f_lineno = 290;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[148]);

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[149];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[150];
        tmp_level_value_2 = mod_consts[151];
        frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_frame.f_lineno = 291;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[152],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_spinner_player == NULL);
        var_spinner_player = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_spinner_player);
        tmp_called_value_2 = var_spinner_player;
        CHECK_OBJECT(var_spinner);
        tmp_called_value_3 = var_spinner;
        CHECK_OBJECT(par_local_config);
        tmp_expression_value_2 = par_local_config;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[153]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_frame.f_lineno = 292;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_frame.f_lineno = 292;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3ca88d739a0d2d089d3ac29aaaba58d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3ca88d739a0d2d089d3ac29aaaba58d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3ca88d739a0d2d089d3ac29aaaba58d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3ca88d739a0d2d089d3ac29aaaba58d,
        type_description_1,
        par_local_config,
        var_spinner,
        var_repeat,
        var_spinner_player
    );


    // Release cached frame if used for exception.
    if (frame_b3ca88d739a0d2d089d3ac29aaaba58d == cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d);
        cache_frame_b3ca88d739a0d2d089d3ac29aaaba58d = NULL;
    }

    assertFrameObject(frame_b3ca88d739a0d2d089d3ac29aaaba58d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_spinner);
    var_spinner = NULL;
    Py_XDECREF(var_repeat);
    var_repeat = NULL;
    Py_XDECREF(var_spinner_player);
    var_spinner_player = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_spinner);
    var_spinner = NULL;
    Py_XDECREF(var_repeat);
    var_repeat = NULL;
    Py_XDECREF(var_spinner_player);
    var_spinner_player = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_local_config);
    Py_DECREF(par_local_config);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_local_config);
    Py_DECREF(par_local_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__6__render_title(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_local_config = python_pars[0];
    PyObject *var_title = NULL;
    PyObject *var_length = NULL;
    PyObject *var_len_title = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_246954643886585f00dcfc365b8d0bdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_246954643886585f00dcfc365b8d0bdf = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_246954643886585f00dcfc365b8d0bdf)) {
        Py_XDECREF(cache_frame_246954643886585f00dcfc365b8d0bdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_246954643886585f00dcfc365b8d0bdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_246954643886585f00dcfc365b8d0bdf = MAKE_FUNCTION_FRAME(codeobj_246954643886585f00dcfc365b8d0bdf, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_246954643886585f00dcfc365b8d0bdf->m_type_description == NULL);
    frame_246954643886585f00dcfc365b8d0bdf = cache_frame_246954643886585f00dcfc365b8d0bdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_246954643886585f00dcfc365b8d0bdf);
    assert(Py_REFCNT(frame_246954643886585f00dcfc365b8d0bdf) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_unicode_arg_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_local_config);
        tmp_expression_value_1 = par_local_config;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[106]);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 296;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[8];
        Py_INCREF(tmp_or_right_value_1);
        tmp_unicode_arg_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_unicode_arg_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_246954643886585f00dcfc365b8d0bdf->m_frame.f_lineno = 296;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_local_config);
            tmp_expression_value_2 = par_local_config;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[154]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 296;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooo";
                    exception_lineno = 296;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[31];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 296;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_title == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_title = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_length == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_length = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_length);
        tmp_operand_value_1 = var_length;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_title);
    tmp_return_value = var_title;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_title);
        tmp_len_arg_1 = var_title;
        tmp_assign_source_6 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_len_title == NULL);
        var_len_title = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_len_title);
        tmp_cmp_expr_left_1 = var_len_title;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_right_1 = var_length;
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_title);
        tmp_args_element_value_2 = var_title;
        tmp_mult_expr_left_1 = mod_consts[156];
        CHECK_OBJECT(var_length);
        tmp_sub_expr_left_1 = var_length;
        CHECK_OBJECT(var_len_title);
        tmp_sub_expr_right_1 = var_len_title;
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_TUPLE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_246954643886585f00dcfc365b8d0bdf->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_length);
        tmp_cmp_expr_left_2 = var_length;
        tmp_cmp_expr_right_2 = mod_consts[157];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[158];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_title);
        tmp_expression_value_3 = var_title;
        CHECK_OBJECT(var_length);
        tmp_sub_expr_left_2 = var_length;
        tmp_sub_expr_right_2 = mod_consts[157];
        tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_246954643886585f00dcfc365b8d0bdf->m_frame.f_lineno = 309;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[160];
        frame_246954643886585f00dcfc365b8d0bdf->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_246954643886585f00dcfc365b8d0bdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_246954643886585f00dcfc365b8d0bdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_246954643886585f00dcfc365b8d0bdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_246954643886585f00dcfc365b8d0bdf,
        type_description_1,
        par_local_config,
        var_title,
        var_length,
        var_len_title
    );


    // Release cached frame if used for exception.
    if (frame_246954643886585f00dcfc365b8d0bdf == cache_frame_246954643886585f00dcfc365b8d0bdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_246954643886585f00dcfc365b8d0bdf);
        cache_frame_246954643886585f00dcfc365b8d0bdf = NULL;
    }

    assertFrameObject(frame_246954643886585f00dcfc365b8d0bdf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_len_title);
    var_len_title = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_title);
    var_title = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_len_title);
    var_len_title = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_local_config);
    Py_DECREF(par_local_config);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_local_config);
    Py_DECREF(par_local_config);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__8_alive_it(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_it = python_pars[0];
    PyObject *par_total = python_pars[1];
    PyObject *par_calibrate = python_pars[2];
    PyObject *par_options = python_pars[3];
    PyObject *var_config = NULL;
    struct Nuitka_FrameObject *frame_28ba0345ed1bfa2b8cad8fe467c6afc9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9)) {
        Py_XDECREF(cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9 = MAKE_FUNCTION_FRAME(codeobj_28ba0345ed1bfa2b8cad8fe467c6afc9, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9->m_type_description == NULL);
    frame_28ba0345ed1bfa2b8cad8fe467c6afc9 = cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_28ba0345ed1bfa2b8cad8fe467c6afc9);
    assert(Py_REFCNT(frame_28ba0345ed1bfa2b8cad8fe467c6afc9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_options);
        tmp_dircall_arg2_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__3_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_config == NULL);
        var_config = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_config);
        tmp_expression_value_1 = var_config;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_28ba0345ed1bfa2b8cad8fe467c6afc9->m_frame.f_lineno = 357;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[162]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 357;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_2;
        CHECK_OBJECT(par_total);
        tmp_cmp_expr_left_1 = par_total;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_it);
        tmp_expression_value_2 = par_it;
        tmp_attribute_value_2 = mod_consts[163];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_it);
        tmp_len_arg_1 = par_it;
        tmp_assign_source_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_total;
            assert(old != NULL);
            par_total = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        if (par_it == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_it;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_it;
            par_it = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_3;
        CHECK_OBJECT(par_total);
        tmp_cmp_expr_left_2 = par_total;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_it);
        tmp_expression_value_3 = par_it;
        tmp_attribute_value_3 = mod_consts[165];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_3, tmp_attribute_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_it);
        tmp_called_instance_1 = par_it;
        frame_28ba0345ed1bfa2b8cad8fe467c6afc9->m_frame.f_lineno = 363;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[165]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_total;
            assert(old != NULL);
            par_total = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_it == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_it;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_config);
        tmp_kw_call_arg_value_0_1 = var_config;
        CHECK_OBJECT(par_total);
        tmp_kw_call_arg_value_1_1 = par_total;
        CHECK_OBJECT(par_calibrate);
        tmp_kw_call_dict_value_0_1 = par_calibrate;
        frame_28ba0345ed1bfa2b8cad8fe467c6afc9->m_frame.f_lineno = 364;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[2]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_28ba0345ed1bfa2b8cad8fe467c6afc9->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28ba0345ed1bfa2b8cad8fe467c6afc9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28ba0345ed1bfa2b8cad8fe467c6afc9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28ba0345ed1bfa2b8cad8fe467c6afc9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28ba0345ed1bfa2b8cad8fe467c6afc9,
        type_description_1,
        par_it,
        par_total,
        par_calibrate,
        par_options,
        var_config
    );


    // Release cached frame if used for exception.
    if (frame_28ba0345ed1bfa2b8cad8fe467c6afc9 == cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9);
        cache_frame_28ba0345ed1bfa2b8cad8fe467c6afc9 = NULL;
    }

    assertFrameObject(frame_28ba0345ed1bfa2b8cad8fe467c6afc9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_it);
    par_it = NULL;
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    par_total = NULL;
    CHECK_OBJECT(var_config);
    Py_DECREF(var_config);
    var_config = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_it);
    par_it = NULL;
    Py_XDECREF(par_total);
    par_total = NULL;
    Py_XDECREF(var_config);
    var_config = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_calibrate);
    Py_DECREF(par_calibrate);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_calibrate);
    Py_DECREF(par_calibrate);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_it = python_pars[1];
    PyObject *par_inner_bar = python_pars[2];
    struct Nuitka_FrameObject *frame_30e87508e86c183ac7c46a40b09e6d17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30e87508e86c183ac7c46a40b09e6d17 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30e87508e86c183ac7c46a40b09e6d17)) {
        Py_XDECREF(cache_frame_30e87508e86c183ac7c46a40b09e6d17);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30e87508e86c183ac7c46a40b09e6d17 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30e87508e86c183ac7c46a40b09e6d17 = MAKE_FUNCTION_FRAME(codeobj_30e87508e86c183ac7c46a40b09e6d17, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30e87508e86c183ac7c46a40b09e6d17->m_type_description == NULL);
    frame_30e87508e86c183ac7c46a40b09e6d17 = cache_frame_30e87508e86c183ac7c46a40b09e6d17;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30e87508e86c183ac7c46a40b09e6d17);
    assert(Py_REFCNT(frame_30e87508e86c183ac7c46a40b09e6d17) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_it);
        tmp_tuple_element_1 = par_it;
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_inner_bar);
        tmp_tuple_element_1 = par_inner_bar;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[168], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30e87508e86c183ac7c46a40b09e6d17, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30e87508e86c183ac7c46a40b09e6d17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30e87508e86c183ac7c46a40b09e6d17, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30e87508e86c183ac7c46a40b09e6d17,
        type_description_1,
        par_self,
        par_it,
        par_inner_bar
    );


    // Release cached frame if used for exception.
    if (frame_30e87508e86c183ac7c46a40b09e6d17 == cache_frame_30e87508e86c183ac7c46a40b09e6d17) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30e87508e86c183ac7c46a40b09e6d17);
        cache_frame_30e87508e86c183ac7c46a40b09e6d17 = NULL;
    }

    assertFrameObject(frame_30e87508e86c183ac7c46a40b09e6d17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_it);
    Py_DECREF(par_it);
    CHECK_OBJECT(par_inner_bar);
    Py_DECREF(par_inner_bar);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_it);
    Py_DECREF(par_it);
    CHECK_OBJECT(par_inner_bar);
    Py_DECREF(par_inner_bar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$progress$$$function__10___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter__(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter___locals {
    PyObject *var_it;
    PyObject *var_inner_bar;
    PyObject *var_bar;
    PyObject *var_item;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
};

static PyObject *alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter___locals *generator_heap = (struct alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_it = NULL;
    generator_heap->var_inner_bar = NULL;
    generator_heap->var_bar = NULL;
    generator_heap->var_item = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_1cc2eb90fb7ad17e35db9eddfce4bacb, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[169]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_attribute_value_1 = mod_consts[168];
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 372;
            generator_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[169]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 375;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[168]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 375;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 375;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_tuple_unpack_1__source_iter == NULL);
        generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "coooo";
            generator_heap->exception_lineno = 375;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_1 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "coooo";
            generator_heap->exception_lineno = 375;
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_tuple_unpack_1__element_2 == NULL);
        generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "coooo";
                    generator_heap->exception_lineno = 375;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[31];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "coooo";
            generator_heap->exception_lineno = 375;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = generator_heap->tmp_tuple_unpack_1__element_1;
        assert(generator_heap->var_it == NULL);
        Py_INCREF(tmp_assign_source_4);
        generator_heap->var_it = tmp_assign_source_4;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_2;
        assert(generator_heap->var_inner_bar == NULL);
        Py_INCREF(tmp_assign_source_5);
        generator_heap->var_inner_bar = tmp_assign_source_5;
    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->var_inner_bar);
        tmp_assign_source_6 = generator_heap->var_inner_bar;
        assert(generator_heap->tmp_with_1__source == NULL);
        Py_INCREF(tmp_assign_source_6);
        generator_heap->tmp_with_1__source = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_3 = generator_heap->tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[98]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 376;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_4;
        }
        generator->m_frame->m_frame.f_lineno = 376;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 376;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_4 = generator_heap->tmp_with_1__source;
        tmp_assign_source_8 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[99]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 376;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_with_1__enter);
        tmp_assign_source_10 = generator_heap->tmp_with_1__enter;
        assert(generator_heap->var_bar == NULL);
        Py_INCREF(tmp_assign_source_10);
        generator_heap->var_bar = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(generator_heap->var_bar);
        tmp_expression_value_5 = generator_heap->var_bar;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_5);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_6;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[169]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_6;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_result = SET_ATTRIBUTE_DICT_SLOT(tmp_assattr_target_1, tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 377;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->var_it);
        tmp_iter_arg_2 = generator_heap->var_it;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_6;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "coooo";
                generator_heap->exception_lineno = 378;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_13 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_item;
            generator_heap->var_item = tmp_assign_source_13;
            Py_INCREF(generator_heap->var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_6;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_item);
        tmp_expression_value_6 = generator_heap->var_item;
        Py_INCREF(tmp_expression_value_6);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_6;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 379;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_7;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        if (generator_heap->var_bar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[117]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 380;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_7;
        }

        tmp_called_value_2 = generator_heap->var_bar;
        generator->m_frame->m_frame.f_lineno = 380;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 380;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 378;
        generator_heap->type_description_1 = "coooo";
        goto try_except_handler_7;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_4 == NULL) {
        generator_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_4);
    } else if (generator_heap->exception_keeper_lineno_4 != 0) {
        generator_heap->exception_keeper_tb_4 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_4, generator->m_frame, generator_heap->exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_4, &generator_heap->exception_keeper_value_4, &generator_heap->exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_14;
        tmp_assign_source_14 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_3 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_8;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_3 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 378;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "coooo";
    goto try_except_handler_8;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 376;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "coooo";
    goto try_except_handler_8;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_4 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 378;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[103]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_6);
            Py_XDECREF(generator_heap->exception_keeper_value_6);
            Py_XDECREF(generator_heap->exception_keeper_tb_6);

            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_5 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 378;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[103]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 378;
            generator_heap->type_description_1 = "coooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator_heap->var_it,
            generator_heap->var_inner_bar,
            generator_heap->var_bar,
            generator_heap->var_item
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var_inner_bar);
    generator_heap->var_inner_bar = NULL;
    Py_XDECREF(generator_heap->var_bar);
    generator_heap->var_bar = NULL;
    Py_XDECREF(generator_heap->var_item);
    generator_heap->var_item = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    CHECK_OBJECT(generator_heap->var_it);
    Py_DECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    CHECK_OBJECT(generator_heap->var_inner_bar);
    Py_DECREF(generator_heap->var_inner_bar);
    generator_heap->var_inner_bar = NULL;
    Py_XDECREF(generator_heap->var_bar);
    generator_heap->var_bar = NULL;
    Py_XDECREF(generator_heap->var_item);
    generator_heap->var_item = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter___context,
        module_alive_progress$core$progress,
        mod_consts[170],
#if PYTHON_VERSION >= 0x350
        mod_consts[171],
#endif
        codeobj_1cc2eb90fb7ad17e35db9eddfce4bacb,
        closure,
        1,
        sizeof(struct alive_progress$core$progress$$$function__10___iter__$$$genobj__1___iter___locals)
    );
}


static PyObject *impl_alive_progress$core$progress$$$function__11___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_909dbbe0e817d15c2f905328985ce8b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_909dbbe0e817d15c2f905328985ce8b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_909dbbe0e817d15c2f905328985ce8b7)) {
        Py_XDECREF(cache_frame_909dbbe0e817d15c2f905328985ce8b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_909dbbe0e817d15c2f905328985ce8b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_909dbbe0e817d15c2f905328985ce8b7 = MAKE_FUNCTION_FRAME(codeobj_909dbbe0e817d15c2f905328985ce8b7, module_alive_progress$core$progress, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_909dbbe0e817d15c2f905328985ce8b7->m_type_description == NULL);
    frame_909dbbe0e817d15c2f905328985ce8b7 = cache_frame_909dbbe0e817d15c2f905328985ce8b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_909dbbe0e817d15c2f905328985ce8b7);
    assert(Py_REFCNT(frame_909dbbe0e817d15c2f905328985ce8b7) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_909dbbe0e817d15c2f905328985ce8b7->m_frame.f_lineno = 383;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[172]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 383;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_909dbbe0e817d15c2f905328985ce8b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_909dbbe0e817d15c2f905328985ce8b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_909dbbe0e817d15c2f905328985ce8b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_909dbbe0e817d15c2f905328985ce8b7,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_909dbbe0e817d15c2f905328985ce8b7 == cache_frame_909dbbe0e817d15c2f905328985ce8b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_909dbbe0e817d15c2f905328985ce8b7);
        cache_frame_909dbbe0e817d15c2f905328985ce8b7 = NULL;
    }

    assertFrameObject(frame_909dbbe0e817d15c2f905328985ce8b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__10___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__10___iter__,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_1cc2eb90fb7ad17e35db9eddfce4bacb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__11___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__11___call__,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_909dbbe0e817d15c2f905328985ce8b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__1_alive_bar(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__1_alive_bar,
        mod_consts[193],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b0d75114e80205ebcc799db9d5d695ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_alive_progress$core$progress,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cd08c996ba1d23dfc77e2db076ad0e2b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_alive_progress$core$progress,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_fcc3c77b47123adcc030d5c350e4a4c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__11_stats(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__11_stats,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_4c2708df6541adac9bf2ff7e281e9932,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__12_stats(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__12_stats,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_ccd670ea3ccb0563131decf88aa74bd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__13_stats_end(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__13_stats_end,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_87b9944f884500bb1949a3bf5628e351,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__14_elapsed(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__14_elapsed,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_8f0a0c08a68eee0b5c65a33055565ee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__15_elapsed_end(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__15_elapsed_end,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_a15278d694d70f8c5c3bd5dc11e40b2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__16_update_hook(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__16_update_hook,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_5d3262c327381e6d1cb059703214c058,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__17_update_hook(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__17_update_hook,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_0e617336b7a52e0b9b920adaf818556c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__18_monitor(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__18_monitor,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_167590a21031152e523238bbe4dd29d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__19_monitor_end(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__19_monitor_end,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_41b65bd192e6a5d1560731bbce836813,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__1_run(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__1_run,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_8921dd8bb1d829882d265940d988a261,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__20_update_hook() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_b67a54e11565d626dd332511cb21f1ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__21_monitor(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__21_monitor,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_64b6045eef313df5e09698aa242578ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__22_monitor_end(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__22_monitor_end,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_dbcb1f4149cb2483f6486c0697555fe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__23_monitor(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__23_monitor,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_7846c8876b7382d4fe0b1fe601d93e04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__2_alive_repr(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__2_alive_repr,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[15],
#endif
        codeobj_2f0268cb7eb246f60f3ab83b02e1c499,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        9
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__3_set_text(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__3_set_text,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[18],
#endif
        codeobj_f3facf3172c58af7362fa40469fec4e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__4_bar_handle(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__4_bar_handle,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_8a021f24cf742770bc7e561745b52a13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__5_bar_handle(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__5_bar_handle,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_51c0e7f267aabe842960a96b65c554e5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__6_start_monitoring(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__6_start_monitoring,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_6d7a2318bc0312ce717c0dc0c1ec23e8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        7
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__7_stop_monitoring(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__7_stop_monitoring,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_3903c7266ada5fb289b43fe221177cd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__8_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__8_lambda,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_208c8b4e44d67c0dad0456fa54bb5483,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__9_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__9_lambda,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_424490a95e5f8d21758281fe144d93f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__3___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__3___call__,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_0e976e23436f2b3c2f41eaac1e31a9d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__4__create_bars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__4__create_bars,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_937abcb7e384345aecb5a1255671217f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__5__create_spinner_player() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__5__create_spinner_player,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b3ca88d739a0d2d089d3ac29aaaba58d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__6__render_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__6__render_title,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_246954643886585f00dcfc365b8d0bdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__7___noop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac68c784d86e341fed01f6ec10e2f273,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__8_alive_it(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__8_alive_it,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28ba0345ed1bfa2b8cad8fe467c6afc9,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_alive_progress$core$progress,
        mod_consts[167],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$progress$$$function__9___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$progress$$$function__9___init__,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_30e87508e86c183ac7c46a40b09e6d17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$progress,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_alive_progress$core$progress[] = {
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__1_run,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__2_alive_repr,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__3_set_text,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__4_bar_handle,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__5_bar_handle,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__6_start_monitoring,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__7_stop_monitoring,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__8_lambda,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__9_lambda,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__10_pause_monitoring,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__11_stats,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__12_stats,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__13_stats_end,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__14_elapsed,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__15_elapsed_end,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__16_update_hook,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__17_update_hook,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__18_monitor,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__19_monitor_end,
    NULL,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__21_monitor,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__22_monitor_end,
    impl_alive_progress$core$progress$$$function__2___alive_bar$$$genobj__1___alive_bar$$$function__23_monitor,
    impl_alive_progress$core$progress$$$function__1_alive_bar,
    impl_alive_progress$core$progress$$$function__2___alive_bar,
    impl_alive_progress$core$progress$$$function__3___call__,
    impl_alive_progress$core$progress$$$function__4__create_bars,
    impl_alive_progress$core$progress$$$function__5__create_spinner_player,
    impl_alive_progress$core$progress$$$function__6__render_title,
    NULL,
    impl_alive_progress$core$progress$$$function__8_alive_it,
    impl_alive_progress$core$progress$$$function__9___init__,
    impl_alive_progress$core$progress$$$function__10___iter__,
    impl_alive_progress$core$progress$$$function__11___call__,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_alive_progress$core$progress;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_alive_progress$core$progress) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_alive_progress$core$progress[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_alive_progress$core$progress,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_alive_progress$core$progress(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("alive_progress.core.progress");

    // Store the module for future use.
    module_alive_progress$core$progress = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.core.progress: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.core.progress: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.core.progress: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initalive_progress$core$progress\n");

    moduledict_alive_progress$core$progress = MODULE_DICT(module_alive_progress$core$progress);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_alive_progress$core$progress,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_alive_progress$core$progress,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[8]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_alive_progress$core$progress,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_alive_progress$core$progress,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_alive_progress$core$progress,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_alive_progress$core$progress);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_alive_progress$core$progress);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_f82e97bebc62ad80b5aa1d739f97d697;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_2);
    }
    frame_f82e97bebc62ad80b5aa1d739f97d697 = MAKE_MODULE_FRAME(codeobj_f82e97bebc62ad80b5aa1d739f97d697, module_alive_progress$core$progress);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f82e97bebc62ad80b5aa1d739f97d697);
    assert(Py_REFCNT(frame_f82e97bebc62ad80b5aa1d739f97d697) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[176], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[175]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[177], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[135];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[10];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[52];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[10];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[104];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[10];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[179];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[180];
        tmp_level_value_4 = mod_consts[10];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[63],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[181];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[182];
        tmp_level_value_5 = mod_consts[157];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[37],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[183];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[184];
        tmp_level_value_6 = mod_consts[157];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[0],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[112];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[185];
        tmp_level_value_7 = mod_consts[157];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[59],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[59]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[57],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[57]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[186];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[187];
        tmp_level_value_8 = mod_consts[151];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 9;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[155],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[155]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[159],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[159]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[107],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[107]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[111],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[111]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_17);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[188];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[189];
        tmp_level_value_9 = mod_consts[151];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[56],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[190];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_alive_progress$core$progress;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[191];
        tmp_level_value_10 = mod_consts[151];
        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 11;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[134],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[134]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[123],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[123]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_alive_progress$core$progress,
                mod_consts[72],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[72]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_22);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_1;
        PyObject *tmp_kw_defaults_1;
        tmp_defaults_1 = mod_consts[13];
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[192]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_23 = MAKE_FUNCTION_alive_progress$core$progress$$$function__1_alive_bar(tmp_defaults_1, tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_2;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[13];
        tmp_dict_key_1 = mod_consts[38];
        tmp_dict_value_1 = Py_None;
        tmp_kw_defaults_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_1;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[54];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[194]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_1 = MAKE_FUNCTION_alive_progress$core$progress$$$function__2___alive_bar(tmp_defaults_2, tmp_kw_defaults_2);

        frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 97;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270, mod_consts[196], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[39];
        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270, mod_consts[197], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_alive_progress$core$progress$$$function__3___call__();

        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270, mod_consts[198], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[39];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 270;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_27 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270);
        locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270);
        locals_alive_progress$core$progress$$$class__1___AliveBarHandle_270 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 270;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_alive_progress$core$progress$$$function__4__create_bars();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_alive_progress$core$progress$$$function__5__create_spinner_player();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_alive_progress$core$progress$$$function__6__render_title();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_alive_progress$core$progress$$$function__7___noop();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_3;
        PyObject *tmp_kw_defaults_3;
        tmp_defaults_3 = mod_consts[13];
        tmp_kw_defaults_3 = DICT_COPY(mod_consts[192]);
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_33 = MAKE_FUNCTION_alive_progress$core$progress$$$function__8_alive_it(tmp_defaults_3, tmp_kw_defaults_3);

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[195];
        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367, mod_consts[196], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367, mod_consts[197], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_alive_progress$core$progress$$$function__9___init__();

        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367, mod_consts[202], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_alive_progress$core$progress$$$function__10___iter__();

        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_alive_progress$core$progress$$$function__11___call__();

        tmp_res = PyDict_SetItem(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367, mod_consts[198], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[166];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame.f_lineno = 367;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_36 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367);
        locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367);
        locals_alive_progress$core$progress$$$class__2___AliveBarIteratorAdapter_367 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 367;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_36);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f82e97bebc62ad80b5aa1d739f97d697, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f82e97bebc62ad80b5aa1d739f97d697->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f82e97bebc62ad80b5aa1d739f97d697, exception_lineno);
    }



    assertFrameObject(frame_f82e97bebc62ad80b5aa1d739f97d697);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("alive_progress.core.progress", false);

    Py_INCREF(module_alive_progress$core$progress);
    return module_alive_progress$core$progress;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$progress, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("alive_progress$core$progress", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
