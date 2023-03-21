/* Generated code for Python module 'alive_progress.core.configuration'
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

/* The "module_alive_progress$core$configuration" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_alive_progress$core$configuration;
PyDictObject *moduledict_alive_progress$core$configuration;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[141];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[141];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("alive_progress.core.configuration"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 141; i++) {
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
void checkModuleConstants_alive_progress$core$configuration(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 141; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_be0707642b700364627b8dd01584b4c1;
static PyCodeObject *codeobj_17e424a84f3f5ef62cfa43877da08fb2;
static PyCodeObject *codeobj_27f1544bab6ab4f78fe31ac295f5c5c3;
static PyCodeObject *codeobj_b96c0da8a48675f7161b6ea4204fea07;
static PyCodeObject *codeobj_d1b72b579b2cafc6f3b18aa73f73e639;
static PyCodeObject *codeobj_d7625c7363b8a16b92ebce567f04d60d;
static PyCodeObject *codeobj_82953e87abd78619584244aa101a5d27;
static PyCodeObject *codeobj_b5c3858f6af6ef593b2b284c8bd4f13c;
static PyCodeObject *codeobj_ee17a756ee541139e415d0cc77116362;
static PyCodeObject *codeobj_df3b6ce9a19967ea349d74070245368f;
static PyCodeObject *codeobj_19e1f86bfc75d13ee655e90ab8ab1cb8;
static PyCodeObject *codeobj_eb208d098a562a71a71ff8828aec0e38;
static PyCodeObject *codeobj_cf43c3f3c922499192daeffae42eb2d4;
static PyCodeObject *codeobj_444deb235eee6ad64d3d3bf810140cf3;
static PyCodeObject *codeobj_e3c34169732fe2187ab767a5cda71b2f;
static PyCodeObject *codeobj_bc0e952f3b41f9655b0e66f7dd34097f;
static PyCodeObject *codeobj_741648707950d56222b9485c72228055;
static PyCodeObject *codeobj_21ae65dc62153fcaa21badb6baa794a1;
static PyCodeObject *codeobj_facb1798fa6cce890f27575e26672879;
static PyCodeObject *codeobj_71bb0d403a2958760187257872ccffb1;
static PyCodeObject *codeobj_dc63984699b8a8f0bcaf4eaa5a41c095;
static PyCodeObject *codeobj_15face545fd0c90fa0e85fd7e0891a74;
static PyCodeObject *codeobj_af67c1f70fb7711e6278f7aeeadfea1d;
static PyCodeObject *codeobj_21e943202cc60665bec982cf88a178b0;
static PyCodeObject *codeobj_e0a3ffd829e8b373fa28514b57bfd055;
static PyCodeObject *codeobj_19388dd7505e1ab039cceea20e8cd8b5;
static PyCodeObject *codeobj_154d66eb06fbeb8b486a1071ffccf5a6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[106]); CHECK_OBJECT(module_filename_obj);
    codeobj_be0707642b700364627b8dd01584b4c1 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[108], NULL, 1, 0, 0);
    codeobj_17e424a84f3f5ef62cfa43877da08fb2 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[89], mod_consts[89], mod_consts[109], mod_consts[110], 1, 0, 0);
    codeobj_27f1544bab6ab4f78fe31ac295f5c5c3 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[89], mod_consts[89], mod_consts[111], mod_consts[110], 1, 0, 0);
    codeobj_b96c0da8a48675f7161b6ea4204fea07 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[112], mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_d1b72b579b2cafc6f3b18aa73f73e639 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[113], NULL, 2, 0, 0);
    codeobj_d7625c7363b8a16b92ebce567f04d60d = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[114], NULL, 1, 0, 0);
    codeobj_82953e87abd78619584244aa101a5d27 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[115], NULL, 4, 0, 0);
    codeobj_b5c3858f6af6ef593b2b284c8bd4f13c = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[116], NULL, 0, 0, 0);
    codeobj_ee17a756ee541139e415d0cc77116362 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[117], NULL, 0, 0, 0);
    codeobj_df3b6ce9a19967ea349d74070245368f = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[118], NULL, 0, 0, 0);
    codeobj_19e1f86bfc75d13ee655e90ab8ab1cb8 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[119], NULL, 1, 0, 0);
    codeobj_eb208d098a562a71a71ff8828aec0e38 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[119], NULL, 1, 0, 0);
    codeobj_cf43c3f3c922499192daeffae42eb2d4 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[120], mod_consts[121], 1, 0, 0);
    codeobj_444deb235eee6ad64d3d3bf810140cf3 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[122], mod_consts[123], 1, 0, 0);
    codeobj_e3c34169732fe2187ab767a5cda71b2f = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[124], mod_consts[125], 1, 0, 0);
    codeobj_bc0e952f3b41f9655b0e66f7dd34097f = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[126], mod_consts[127], 1, 0, 0);
    codeobj_741648707950d56222b9485c72228055 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], mod_consts[128], mod_consts[129], 1, 0, 0);
    codeobj_21ae65dc62153fcaa21badb6baa794a1 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[130], NULL, 2, 0, 0);
    codeobj_facb1798fa6cce890f27575e26672879 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[57], mod_consts[131], mod_consts[132], 2, 0, 0);
    codeobj_71bb0d403a2958760187257872ccffb1 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[133], NULL, 1, 0, 0);
    codeobj_dc63984699b8a8f0bcaf4eaa5a41c095 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[117], NULL, 0, 0, 0);
    codeobj_15face545fd0c90fa0e85fd7e0891a74 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[134], NULL, 0, 0, 0);
    codeobj_af67c1f70fb7711e6278f7aeeadfea1d = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[54], mod_consts[54], mod_consts[135], mod_consts[136], 1, 0, 0);
    codeobj_21e943202cc60665bec982cf88a178b0 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[137], mod_consts[110], 0, 0, 0);
    codeobj_e0a3ffd829e8b373fa28514b57bfd055 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[47], mod_consts[138], mod_consts[138], 0, 0, 0);
    codeobj_19388dd7505e1ab039cceea20e8cd8b5 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[51], mod_consts[51], mod_consts[139], mod_consts[136], 1, 0, 0);
    codeobj_154d66eb06fbeb8b486a1071ffccf5a6 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[67], mod_consts[67], mod_consts[140], mod_consts[132], 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9__unpack_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__1_reset(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__2_set_global(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__3_create_context(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse$$$function__1_validator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__1__spinner_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__2__bar_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__3___style_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__3___style_input_factory$$$function__1__input(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__4___name_lookup_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__4___name_lookup_factory$$$function__1__input(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__5___func_lookup_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__5___func_lookup_factory$$$function__1__input(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__6__int_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__6__int_input_factory$$$function__1__input(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__7__bool_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__7__bool_input_factory$$$function__1__input();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__8__force_tty_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__8__force_tty_input_factory$$$function__1__input(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__9__text_input_factory();


static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__9__text_input_factory$$$function__1__input();


// The module function definitions.
static PyObject *impl_alive_progress$core$configuration$$$function__1__spinner_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_default = python_pars[0];
    PyObject *var_spinner_compiler = NULL;
    PyObject *var_SPINNERS = NULL;
    struct Nuitka_FrameObject *frame_71bb0d403a2958760187257872ccffb1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_71bb0d403a2958760187257872ccffb1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_71bb0d403a2958760187257872ccffb1)) {
        Py_XDECREF(cache_frame_71bb0d403a2958760187257872ccffb1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71bb0d403a2958760187257872ccffb1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71bb0d403a2958760187257872ccffb1 = MAKE_FUNCTION_FRAME(codeobj_71bb0d403a2958760187257872ccffb1, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_71bb0d403a2958760187257872ccffb1->m_type_description == NULL);
    frame_71bb0d403a2958760187257872ccffb1 = cache_frame_71bb0d403a2958760187257872ccffb1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_71bb0d403a2958760187257872ccffb1);
    assert(Py_REFCNT(frame_71bb0d403a2958760187257872ccffb1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_71bb0d403a2958760187257872ccffb1->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[3],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_spinner_compiler == NULL);
        var_spinner_compiler = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[5];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[6];
        tmp_level_value_2 = mod_consts[2];
        frame_71bb0d403a2958760187257872ccffb1->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[7],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[7]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_SPINNERS == NULL);
        var_SPINNERS = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_SPINNERS);
        tmp_args_element_value_1 = var_SPINNERS;
        CHECK_OBJECT(var_spinner_compiler);
        tmp_args_element_value_2 = var_spinner_compiler;
        tmp_args_element_value_3 = mod_consts[9];
        CHECK_OBJECT(par_default);
        tmp_args_element_value_4 = par_default;
        frame_71bb0d403a2958760187257872ccffb1->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
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
        exception_tb = MAKE_TRACEBACK(frame_71bb0d403a2958760187257872ccffb1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71bb0d403a2958760187257872ccffb1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71bb0d403a2958760187257872ccffb1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71bb0d403a2958760187257872ccffb1,
        type_description_1,
        par_default,
        var_spinner_compiler,
        var_SPINNERS
    );


    // Release cached frame if used for exception.
    if (frame_71bb0d403a2958760187257872ccffb1 == cache_frame_71bb0d403a2958760187257872ccffb1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_71bb0d403a2958760187257872ccffb1);
        cache_frame_71bb0d403a2958760187257872ccffb1 = NULL;
    }

    assertFrameObject(frame_71bb0d403a2958760187257872ccffb1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_spinner_compiler);
    Py_DECREF(var_spinner_compiler);
    var_spinner_compiler = NULL;
    CHECK_OBJECT(var_SPINNERS);
    Py_DECREF(var_SPINNERS);
    var_SPINNERS = NULL;
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

    Py_XDECREF(var_spinner_compiler);
    var_spinner_compiler = NULL;
    Py_XDECREF(var_SPINNERS);
    var_SPINNERS = NULL;
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
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__2__bar_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_bars = NULL;
    PyObject *var_BARS = NULL;
    struct Nuitka_FrameObject *frame_b5c3858f6af6ef593b2b284c8bd4f13c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c)) {
        Py_XDECREF(cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c = MAKE_FUNCTION_FRAME(codeobj_b5c3858f6af6ef593b2b284c8bd4f13c, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c->m_type_description == NULL);
    frame_b5c3858f6af6ef593b2b284c8bd4f13c = cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5c3858f6af6ef593b2b284c8bd4f13c);
    assert(Py_REFCNT(frame_b5c3858f6af6ef593b2b284c8bd4f13c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[10];
        tmp_level_value_1 = mod_consts[2];
        frame_b5c3858f6af6ef593b2b284c8bd4f13c->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[11],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_bars == NULL);
        var_bars = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[5];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[12];
        tmp_level_value_2 = mod_consts[2];
        frame_b5c3858f6af6ef593b2b284c8bd4f13c->m_frame.f_lineno = 20;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[13],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_BARS == NULL);
        var_BARS = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_BARS);
        tmp_args_element_value_1 = var_BARS;
        CHECK_OBJECT(var_bars);
        tmp_args_element_value_2 = var_bars;
        tmp_args_element_value_3 = mod_consts[14];
        tmp_args_element_value_4 = Py_None;
        frame_b5c3858f6af6ef593b2b284c8bd4f13c->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_b5c3858f6af6ef593b2b284c8bd4f13c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5c3858f6af6ef593b2b284c8bd4f13c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5c3858f6af6ef593b2b284c8bd4f13c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5c3858f6af6ef593b2b284c8bd4f13c,
        type_description_1,
        var_bars,
        var_BARS
    );


    // Release cached frame if used for exception.
    if (frame_b5c3858f6af6ef593b2b284c8bd4f13c == cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c);
        cache_frame_b5c3858f6af6ef593b2b284c8bd4f13c = NULL;
    }

    assertFrameObject(frame_b5c3858f6af6ef593b2b284c8bd4f13c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_bars);
    Py_DECREF(var_bars);
    var_bars = NULL;
    CHECK_OBJECT(var_BARS);
    Py_DECREF(var_BARS);
    var_BARS = NULL;
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

    Py_XDECREF(var_bars);
    var_bars = NULL;
    Py_XDECREF(var_BARS);
    var_BARS = NULL;
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


static PyObject *impl_alive_progress$core$configuration$$$function__3___style_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name_lookup = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_module_lookup = python_pars[1];
    PyObject *par_inner_name = python_pars[2];
    struct Nuitka_CellObject *par_default = Nuitka_Cell_New1(python_pars[3]);
    PyObject *var__input = NULL;
    struct Nuitka_CellObject *var_func_lookup = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_82953e87abd78619584244aa101a5d27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_82953e87abd78619584244aa101a5d27 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_default;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_func_lookup;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_name_lookup;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__3___style_input_factory$$$function__1__input(tmp_closure_1);

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_82953e87abd78619584244aa101a5d27)) {
        Py_XDECREF(cache_frame_82953e87abd78619584244aa101a5d27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82953e87abd78619584244aa101a5d27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82953e87abd78619584244aa101a5d27 = MAKE_FUNCTION_FRAME(codeobj_82953e87abd78619584244aa101a5d27, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_82953e87abd78619584244aa101a5d27->m_type_description == NULL);
    frame_82953e87abd78619584244aa101a5d27 = cache_frame_82953e87abd78619584244aa101a5d27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_82953e87abd78619584244aa101a5d27);
    assert(Py_REFCNT(frame_82953e87abd78619584244aa101a5d27) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "coococ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_name_lookup));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_name_lookup);
        frame_82953e87abd78619584244aa101a5d27->m_frame.f_lineno = 28;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "coococ";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_name_lookup);
            PyCell_SET(par_name_lookup, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "coococ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module_lookup);
        tmp_args_element_value_2 = par_module_lookup;
        CHECK_OBJECT(par_inner_name);
        tmp_args_element_value_3 = par_inner_name;
        frame_82953e87abd78619584244aa101a5d27->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "coococ";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_func_lookup) == NULL);
        PyCell_SET(var_func_lookup, tmp_assign_source_3);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82953e87abd78619584244aa101a5d27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82953e87abd78619584244aa101a5d27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82953e87abd78619584244aa101a5d27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82953e87abd78619584244aa101a5d27,
        type_description_1,
        par_name_lookup,
        par_module_lookup,
        par_inner_name,
        par_default,
        var__input,
        var_func_lookup
    );


    // Release cached frame if used for exception.
    if (frame_82953e87abd78619584244aa101a5d27 == cache_frame_82953e87abd78619584244aa101a5d27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_82953e87abd78619584244aa101a5d27);
        cache_frame_82953e87abd78619584244aa101a5d27 = NULL;
    }

    assertFrameObject(frame_82953e87abd78619584244aa101a5d27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name_lookup);
    Py_DECREF(par_name_lookup);
    par_name_lookup = NULL;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    CHECK_OBJECT(var_func_lookup);
    Py_DECREF(var_func_lookup);
    var_func_lookup = NULL;
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

    CHECK_OBJECT(par_name_lookup);
    Py_DECREF(par_name_lookup);
    par_name_lookup = NULL;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
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
    CHECK_OBJECT(par_module_lookup);
    Py_DECREF(par_module_lookup);
    CHECK_OBJECT(par_inner_name);
    Py_DECREF(par_inner_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_module_lookup);
    Py_DECREF(par_module_lookup);
    CHECK_OBJECT(par_inner_name);
    Py_DECREF(par_inner_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__3___style_input_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_bc0e952f3b41f9655b0e66f7dd34097f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc0e952f3b41f9655b0e66f7dd34097f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc0e952f3b41f9655b0e66f7dd34097f)) {
        Py_XDECREF(cache_frame_bc0e952f3b41f9655b0e66f7dd34097f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc0e952f3b41f9655b0e66f7dd34097f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc0e952f3b41f9655b0e66f7dd34097f = MAKE_FUNCTION_FRAME(codeobj_bc0e952f3b41f9655b0e66f7dd34097f, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc0e952f3b41f9655b0e66f7dd34097f->m_type_description == NULL);
    frame_bc0e952f3b41f9655b0e66f7dd34097f = cache_frame_bc0e952f3b41f9655b0e66f7dd34097f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc0e952f3b41f9655b0e66f7dd34097f);
    assert(Py_REFCNT(frame_bc0e952f3b41f9655b0e66f7dd34097f) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_bc0e952f3b41f9655b0e66f7dd34097f->m_frame.f_lineno = 26;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_bc0e952f3b41f9655b0e66f7dd34097f->m_frame.f_lineno = 26;
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "occc";
            goto frame_exception_exit_1;
        }

        tmp_or_right_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_or_right_value_2);
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_bc0e952f3b41f9655b0e66f7dd34097f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc0e952f3b41f9655b0e66f7dd34097f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc0e952f3b41f9655b0e66f7dd34097f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc0e952f3b41f9655b0e66f7dd34097f,
        type_description_1,
        par_x,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bc0e952f3b41f9655b0e66f7dd34097f == cache_frame_bc0e952f3b41f9655b0e66f7dd34097f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc0e952f3b41f9655b0e66f7dd34097f);
        cache_frame_bc0e952f3b41f9655b0e66f7dd34097f = NULL;
    }

    assertFrameObject(frame_bc0e952f3b41f9655b0e66f7dd34097f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__4___name_lookup_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name_lookup = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var__input = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_name_lookup;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__4___name_lookup_factory$$$function__1__input(tmp_closure_1);

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name_lookup);
    Py_DECREF(par_name_lookup);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__4___name_lookup_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_e3c34169732fe2187ab767a5cda71b2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e3c34169732fe2187ab767a5cda71b2f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3c34169732fe2187ab767a5cda71b2f)) {
        Py_XDECREF(cache_frame_e3c34169732fe2187ab767a5cda71b2f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3c34169732fe2187ab767a5cda71b2f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3c34169732fe2187ab767a5cda71b2f = MAKE_FUNCTION_FRAME(codeobj_e3c34169732fe2187ab767a5cda71b2f, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e3c34169732fe2187ab767a5cda71b2f->m_type_description == NULL);
    frame_e3c34169732fe2187ab767a5cda71b2f = cache_frame_e3c34169732fe2187ab767a5cda71b2f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e3c34169732fe2187ab767a5cda71b2f);
    assert(Py_REFCNT(frame_e3c34169732fe2187ab767a5cda71b2f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_e3c34169732fe2187ab767a5cda71b2f->m_frame.f_lineno = 36;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3c34169732fe2187ab767a5cda71b2f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3c34169732fe2187ab767a5cda71b2f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3c34169732fe2187ab767a5cda71b2f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3c34169732fe2187ab767a5cda71b2f,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e3c34169732fe2187ab767a5cda71b2f == cache_frame_e3c34169732fe2187ab767a5cda71b2f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e3c34169732fe2187ab767a5cda71b2f);
        cache_frame_e3c34169732fe2187ab767a5cda71b2f = NULL;
    }

    assertFrameObject(frame_e3c34169732fe2187ab767a5cda71b2f);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__5___func_lookup_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_module_lookup = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_inner_name = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var__input = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_inner_name;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_module_lookup;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__5___func_lookup_factory$$$function__1__input(tmp_closure_1);

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_module_lookup);
    Py_DECREF(par_module_lookup);
    CHECK_OBJECT(par_inner_name);
    Py_DECREF(par_inner_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__5___func_lookup_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_func_file = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cf43c3f3c922499192daeffae42eb2d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf43c3f3c922499192daeffae42eb2d4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cf43c3f3c922499192daeffae42eb2d4)) {
        Py_XDECREF(cache_frame_cf43c3f3c922499192daeffae42eb2d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf43c3f3c922499192daeffae42eb2d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf43c3f3c922499192daeffae42eb2d4 = MAKE_FUNCTION_FRAME(codeobj_cf43c3f3c922499192daeffae42eb2d4, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf43c3f3c922499192daeffae42eb2d4->m_type_description == NULL);
    frame_cf43c3f3c922499192daeffae42eb2d4 = cache_frame_cf43c3f3c922499192daeffae42eb2d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf43c3f3c922499192daeffae42eb2d4);
    assert(Py_REFCNT(frame_cf43c3f3c922499192daeffae42eb2d4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = IMPORT_HARD_POSIXPATH();
        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 44;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        frame_cf43c3f3c922499192daeffae42eb2d4->m_frame.f_lineno = 44;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooocc";
            goto try_except_handler_2;
        }
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


            type_description_1 = "ooocc";
            exception_lineno = 44;
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


            type_description_1 = "ooocc";
            exception_lineno = 44;
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

                    type_description_1 = "ooocc";
                    exception_lineno = 44;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooocc";
            exception_lineno = 44;
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
        assert(var_func_file == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_func_file = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_5);
        var__ = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_x);
        tmp_expression_value_4 = par_x;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 45;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_expression_value_6 = IMPORT_HARD_POSIXPATH();
        assert(!(tmp_expression_value_6 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[27]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_expression_value_8 = par_x;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[31]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 46;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[34]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 46;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_cf43c3f3c922499192daeffae42eb2d4->m_frame.f_lineno = 46;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[4];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func_file);
        tmp_cmp_expr_right_2 = var_func_file;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
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
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;
        type_description_1 = "ooocc";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf43c3f3c922499192daeffae42eb2d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf43c3f3c922499192daeffae42eb2d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf43c3f3c922499192daeffae42eb2d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf43c3f3c922499192daeffae42eb2d4,
        type_description_1,
        par_x,
        var_func_file,
        var__,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_cf43c3f3c922499192daeffae42eb2d4 == cache_frame_cf43c3f3c922499192daeffae42eb2d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf43c3f3c922499192daeffae42eb2d4);
        cache_frame_cf43c3f3c922499192daeffae42eb2d4 = NULL;
    }

    assertFrameObject(frame_cf43c3f3c922499192daeffae42eb2d4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_func_file);
    var_func_file = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
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

    Py_XDECREF(var_func_file);
    var_func_file = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__6__int_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_lower = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_upper = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var__input = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_lower;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_upper;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__6__int_input_factory$$$function__1__input(tmp_closure_1);

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lower);
    Py_DECREF(par_lower);
    CHECK_OBJECT(par_upper);
    Py_DECREF(par_upper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__6__int_input_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_444deb235eee6ad64d3d3bf810140cf3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_444deb235eee6ad64d3d3bf810140cf3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_444deb235eee6ad64d3d3bf810140cf3)) {
        Py_XDECREF(cache_frame_444deb235eee6ad64d3d3bf810140cf3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_444deb235eee6ad64d3d3bf810140cf3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_444deb235eee6ad64d3d3bf810140cf3 = MAKE_FUNCTION_FRAME(codeobj_444deb235eee6ad64d3d3bf810140cf3, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_444deb235eee6ad64d3d3bf810140cf3->m_type_description == NULL);
    frame_444deb235eee6ad64d3d3bf810140cf3 = cache_frame_444deb235eee6ad64d3d3bf810140cf3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_444deb235eee6ad64d3d3bf810140cf3);
    assert(Py_REFCNT(frame_444deb235eee6ad64d3d3bf810140cf3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_x);
            tmp_assign_source_1 = par_x;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[36]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "occ";
                goto try_except_handler_1;
            }

            tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "occ";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "occ";
                goto try_except_handler_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_1;
        branch_no_2:;
        {
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[37]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "occ";
                goto try_except_handler_1;
            }

            tmp_cmp_expr_right_2 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "occ";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 55;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_int_arg_1;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_int_arg_1 = par_x;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_444deb235eee6ad64d3d3bf810140cf3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_444deb235eee6ad64d3d3bf810140cf3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_444deb235eee6ad64d3d3bf810140cf3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_444deb235eee6ad64d3d3bf810140cf3,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_444deb235eee6ad64d3d3bf810140cf3 == cache_frame_444deb235eee6ad64d3d3bf810140cf3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_444deb235eee6ad64d3d3bf810140cf3);
        cache_frame_444deb235eee6ad64d3d3bf810140cf3 = NULL;
    }

    assertFrameObject(frame_444deb235eee6ad64d3d3bf810140cf3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__7__bool_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var__input = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__7__bool_input_factory$$$function__1__input();

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    goto function_return_exit;
    // End of try:

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


static PyObject *impl_alive_progress$core$configuration$$$function__7__bool_input_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_19e1f86bfc75d13ee655e90ab8ab1cb8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8)) {
        Py_XDECREF(cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8 = MAKE_FUNCTION_FRAME(codeobj_19e1f86bfc75d13ee655e90ab8ab1cb8, module_alive_progress$core$configuration, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8->m_type_description == NULL);
    frame_19e1f86bfc75d13ee655e90ab8ab1cb8 = cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19e1f86bfc75d13ee655e90ab8ab1cb8);
    assert(Py_REFCNT(frame_19e1f86bfc75d13ee655e90ab8ab1cb8) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(par_x);
        tmp_value_value_1 = par_x;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_19e1f86bfc75d13ee655e90ab8ab1cb8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19e1f86bfc75d13ee655e90ab8ab1cb8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19e1f86bfc75d13ee655e90ab8ab1cb8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19e1f86bfc75d13ee655e90ab8ab1cb8,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_19e1f86bfc75d13ee655e90ab8ab1cb8 == cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8);
        cache_frame_19e1f86bfc75d13ee655e90ab8ab1cb8 = NULL;
    }

    assertFrameObject(frame_19e1f86bfc75d13ee655e90ab8ab1cb8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__8__force_tty_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var__input = NULL;
    struct Nuitka_CellObject *var_table = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_df3b6ce9a19967ea349d74070245368f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_df3b6ce9a19967ea349d74070245368f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_table;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__8__force_tty_input_factory$$$function__1__input(tmp_closure_1);

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_df3b6ce9a19967ea349d74070245368f)) {
        Py_XDECREF(cache_frame_df3b6ce9a19967ea349d74070245368f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df3b6ce9a19967ea349d74070245368f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df3b6ce9a19967ea349d74070245368f = MAKE_FUNCTION_FRAME(codeobj_df3b6ce9a19967ea349d74070245368f, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df3b6ce9a19967ea349d74070245368f->m_type_description == NULL);
    frame_df3b6ce9a19967ea349d74070245368f = cache_frame_df3b6ce9a19967ea349d74070245368f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df3b6ce9a19967ea349d74070245368f);
    assert(Py_REFCNT(frame_df3b6ce9a19967ea349d74070245368f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_dict_key_1 = Py_None;
        tmp_called_instance_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_called_instance_1 == NULL));
        frame_df3b6ce9a19967ea349d74070245368f->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        tmp_assign_source_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = Py_False;
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oc";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = Py_True;
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oc";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(Nuitka_Cell_GET(var_table) == NULL);
        PyCell_SET(var_table, tmp_assign_source_2);

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df3b6ce9a19967ea349d74070245368f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df3b6ce9a19967ea349d74070245368f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df3b6ce9a19967ea349d74070245368f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df3b6ce9a19967ea349d74070245368f,
        type_description_1,
        var__input,
        var_table
    );


    // Release cached frame if used for exception.
    if (frame_df3b6ce9a19967ea349d74070245368f == cache_frame_df3b6ce9a19967ea349d74070245368f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df3b6ce9a19967ea349d74070245368f);
        cache_frame_df3b6ce9a19967ea349d74070245368f = NULL;
    }

    assertFrameObject(frame_df3b6ce9a19967ea349d74070245368f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    CHECK_OBJECT(var_table);
    Py_DECREF(var_table);
    var_table = NULL;
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

    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
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


static PyObject *impl_alive_progress$core$configuration$$$function__8__force_tty_input_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_741648707950d56222b9485c72228055;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_741648707950d56222b9485c72228055 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_741648707950d56222b9485c72228055)) {
        Py_XDECREF(cache_frame_741648707950d56222b9485c72228055);

#if _DEBUG_REFCOUNTS
        if (cache_frame_741648707950d56222b9485c72228055 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_741648707950d56222b9485c72228055 = MAKE_FUNCTION_FRAME(codeobj_741648707950d56222b9485c72228055, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_741648707950d56222b9485c72228055->m_type_description == NULL);
    frame_741648707950d56222b9485c72228055 = cache_frame_741648707950d56222b9485c72228055;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_741648707950d56222b9485c72228055);
    assert(Py_REFCNT(frame_741648707950d56222b9485c72228055) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 71;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_741648707950d56222b9485c72228055->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_741648707950d56222b9485c72228055, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_741648707950d56222b9485c72228055->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_741648707950d56222b9485c72228055, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_741648707950d56222b9485c72228055,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_741648707950d56222b9485c72228055 == cache_frame_741648707950d56222b9485c72228055) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_741648707950d56222b9485c72228055);
        cache_frame_741648707950d56222b9485c72228055 = NULL;
    }

    assertFrameObject(frame_741648707950d56222b9485c72228055);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__9__text_input_factory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var__input = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__9__text_input_factory$$$function__1__input();

        assert(var__input == NULL);
        var__input = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var__input);
    tmp_return_value = var__input;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__input);
    Py_DECREF(var__input);
    var__input = NULL;
    goto function_return_exit;
    // End of try:

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


static PyObject *impl_alive_progress$core$configuration$$$function__9__text_input_factory$$$function__1__input(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_eb208d098a562a71a71ff8828aec0e38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb208d098a562a71a71ff8828aec0e38 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb208d098a562a71a71ff8828aec0e38)) {
        Py_XDECREF(cache_frame_eb208d098a562a71a71ff8828aec0e38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb208d098a562a71a71ff8828aec0e38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb208d098a562a71a71ff8828aec0e38 = MAKE_FUNCTION_FRAME(codeobj_eb208d098a562a71a71ff8828aec0e38, module_alive_progress$core$configuration, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb208d098a562a71a71ff8828aec0e38->m_type_description == NULL);
    frame_eb208d098a562a71a71ff8828aec0e38 = cache_frame_eb208d098a562a71a71ff8828aec0e38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb208d098a562a71a71ff8828aec0e38);
    assert(Py_REFCNT(frame_eb208d098a562a71a71ff8828aec0e38) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_x);
        tmp_unicode_arg_1 = par_x;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_eb208d098a562a71a71ff8828aec0e38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb208d098a562a71a71ff8828aec0e38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb208d098a562a71a71ff8828aec0e38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb208d098a562a71a71ff8828aec0e38,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_eb208d098a562a71a71ff8828aec0e38 == cache_frame_eb208d098a562a71a71ff8828aec0e38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb208d098a562a71a71ff8828aec0e38);
        cache_frame_eb208d098a562a71a71ff8828aec0e38 = NULL;
    }

    assertFrameObject(frame_eb208d098a562a71a71ff8828aec0e38);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *var_reset = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_set_global = Nuitka_Cell_Empty();
    PyObject *var_create_context = NULL;
    struct Nuitka_CellObject *var__parse = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_lazy_init = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_global_config = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_validations = Nuitka_Cell_Empty();
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_15face545fd0c90fa0e85fd7e0891a74;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_15face545fd0c90fa0e85fd7e0891a74 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_set_global;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__1_reset(tmp_closure_1);

        assert(Nuitka_Cell_GET(var_reset) == NULL);
        PyCell_SET(var_reset, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_2[3];
        tmp_defaults_1 = mod_consts[49];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_2[0] = var__parse;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_global_config;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_lazy_init;
        Py_INCREF(tmp_closure_2[2]);

        tmp_assign_source_2 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__2_set_global(tmp_defaults_1, tmp_closure_2);

        assert(Nuitka_Cell_GET(var_set_global) == NULL);
        PyCell_SET(var_set_global, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_defaults_2;
        struct Nuitka_CellObject *tmp_closure_3[3];
        tmp_defaults_2 = mod_consts[49];
        Py_INCREF(tmp_defaults_2);

        tmp_closure_3[0] = var__parse;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_global_config;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = var_lazy_init;
        Py_INCREF(tmp_closure_3[2]);

        tmp_assign_source_3 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__3_create_context(tmp_defaults_2, tmp_closure_3);

        assert(var_create_context == NULL);
        var_create_context = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_4[1];

        tmp_closure_4[0] = var_validations;
        Py_INCREF(tmp_closure_4[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse(tmp_closure_4);

        assert(Nuitka_Cell_GET(var__parse) == NULL);
        PyCell_SET(var__parse, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        struct Nuitka_CellObject *tmp_closure_5[3];

        tmp_closure_5[0] = var_global_config;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = var_reset;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = var_validations;
        Py_INCREF(tmp_closure_5[2]);

        tmp_assign_source_5 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init(tmp_closure_5);

        assert(Nuitka_Cell_GET(var_lazy_init) == NULL);
        PyCell_SET(var_lazy_init, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[61], "dd");
        tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_15face545fd0c90fa0e85fd7e0891a74)) {
        Py_XDECREF(cache_frame_15face545fd0c90fa0e85fd7e0891a74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15face545fd0c90fa0e85fd7e0891a74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15face545fd0c90fa0e85fd7e0891a74 = MAKE_FUNCTION_FRAME(codeobj_15face545fd0c90fa0e85fd7e0891a74, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_15face545fd0c90fa0e85fd7e0891a74->m_type_description == NULL);
    frame_15face545fd0c90fa0e85fd7e0891a74 = cache_frame_15face545fd0c90fa0e85fd7e0891a74;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_15face545fd0c90fa0e85fd7e0891a74);
    assert(Py_REFCNT(frame_15face545fd0c90fa0e85fd7e0891a74) == 2);

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccocccc";
            exception_lineno = 178;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccocccc";
            exception_lineno = 178;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "ccocccc";
                    exception_lineno = 178;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccocccc";
            exception_lineno = 178;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(Nuitka_Cell_GET(var_global_config) == NULL);
        Py_INCREF(tmp_assign_source_9);
        PyCell_SET(var_global_config, tmp_assign_source_9);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(Nuitka_Cell_GET(var_validations) == NULL);
        Py_INCREF(tmp_assign_source_10);
        PyCell_SET(var_validations, tmp_assign_source_10);

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_set_global));
        tmp_tuple_element_1 = Nuitka_Cell_GET(var_set_global);
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(var_reset));
        tmp_tuple_element_1 = Nuitka_Cell_GET(var_reset);
        PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        tmp_assign_source_11 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_11 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccocccc";
            exception_lineno = 179;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccocccc";
            exception_lineno = 179;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccocccc";
                    exception_lineno = 179;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccocccc";
            exception_lineno = 179;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assattr_value_1 = tmp_tuple_unpack_2__element_1;
        CHECK_OBJECT(var_create_context);
        tmp_assattr_target_1 = var_create_context;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ccocccc";
            goto try_except_handler_4;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assattr_value_2 = tmp_tuple_unpack_2__element_2;
        CHECK_OBJECT(var_create_context);
        tmp_assattr_target_2 = var_create_context;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ccocccc";
            goto try_except_handler_4;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_15face545fd0c90fa0e85fd7e0891a74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15face545fd0c90fa0e85fd7e0891a74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15face545fd0c90fa0e85fd7e0891a74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15face545fd0c90fa0e85fd7e0891a74,
        type_description_1,
        var_reset,
        var_set_global,
        var_create_context,
        var__parse,
        var_lazy_init,
        var_global_config,
        var_validations
    );


    // Release cached frame if used for exception.
    if (frame_15face545fd0c90fa0e85fd7e0891a74 == cache_frame_15face545fd0c90fa0e85fd7e0891a74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_15face545fd0c90fa0e85fd7e0891a74);
        cache_frame_15face545fd0c90fa0e85fd7e0891a74 = NULL;
    }

    assertFrameObject(frame_15face545fd0c90fa0e85fd7e0891a74);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    CHECK_OBJECT(var_create_context);
    tmp_return_value = var_create_context;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reset);
    Py_DECREF(var_reset);
    var_reset = NULL;
    CHECK_OBJECT(var_set_global);
    Py_DECREF(var_set_global);
    var_set_global = NULL;
    CHECK_OBJECT(var_create_context);
    Py_DECREF(var_create_context);
    var_create_context = NULL;
    CHECK_OBJECT(var__parse);
    Py_DECREF(var__parse);
    var__parse = NULL;
    CHECK_OBJECT(var_lazy_init);
    Py_DECREF(var_lazy_init);
    var_lazy_init = NULL;
    CHECK_OBJECT(var_global_config);
    Py_DECREF(var_global_config);
    var_global_config = NULL;
    CHECK_OBJECT(var_validations);
    Py_DECREF(var_validations);
    var_validations = NULL;
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

    CHECK_OBJECT(var_reset);
    Py_DECREF(var_reset);
    var_reset = NULL;
    CHECK_OBJECT(var_set_global);
    Py_DECREF(var_set_global);
    var_set_global = NULL;
    CHECK_OBJECT(var_create_context);
    Py_DECREF(var_create_context);
    var_create_context = NULL;
    CHECK_OBJECT(var__parse);
    Py_DECREF(var__parse);
    var__parse = NULL;
    CHECK_OBJECT(var_lazy_init);
    Py_DECREF(var_lazy_init);
    var_lazy_init = NULL;
    CHECK_OBJECT(var_global_config);
    Py_DECREF(var_global_config);
    var_global_config = NULL;
    CHECK_OBJECT(var_validations);
    Py_DECREF(var_validations);
    var_validations = NULL;
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


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config$$$function__1_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e0a3ffd829e8b373fa28514b57bfd055;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0a3ffd829e8b373fa28514b57bfd055 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0a3ffd829e8b373fa28514b57bfd055)) {
        Py_XDECREF(cache_frame_e0a3ffd829e8b373fa28514b57bfd055);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0a3ffd829e8b373fa28514b57bfd055 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0a3ffd829e8b373fa28514b57bfd055 = MAKE_FUNCTION_FRAME(codeobj_e0a3ffd829e8b373fa28514b57bfd055, module_alive_progress$core$configuration, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0a3ffd829e8b373fa28514b57bfd055->m_type_description == NULL);
    frame_e0a3ffd829e8b373fa28514b57bfd055 = cache_frame_e0a3ffd829e8b373fa28514b57bfd055;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0a3ffd829e8b373fa28514b57bfd055);
    assert(Py_REFCNT(frame_e0a3ffd829e8b373fa28514b57bfd055) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_e0a3ffd829e8b373fa28514b57bfd055->m_frame.f_lineno = 96;
        tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[63]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0a3ffd829e8b373fa28514b57bfd055, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0a3ffd829e8b373fa28514b57bfd055->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0a3ffd829e8b373fa28514b57bfd055, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0a3ffd829e8b373fa28514b57bfd055,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e0a3ffd829e8b373fa28514b57bfd055 == cache_frame_e0a3ffd829e8b373fa28514b57bfd055) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0a3ffd829e8b373fa28514b57bfd055);
        cache_frame_e0a3ffd829e8b373fa28514b57bfd055 = NULL;
    }

    assertFrameObject(frame_e0a3ffd829e8b373fa28514b57bfd055);

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


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config$$$function__2_set_global(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_theme = python_pars[0];
    PyObject *par_options = python_pars[1];
    struct Nuitka_FrameObject *frame_19388dd7505e1ab039cceea20e8cd8b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19388dd7505e1ab039cceea20e8cd8b5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19388dd7505e1ab039cceea20e8cd8b5)) {
        Py_XDECREF(cache_frame_19388dd7505e1ab039cceea20e8cd8b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19388dd7505e1ab039cceea20e8cd8b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19388dd7505e1ab039cceea20e8cd8b5 = MAKE_FUNCTION_FRAME(codeobj_19388dd7505e1ab039cceea20e8cd8b5, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19388dd7505e1ab039cceea20e8cd8b5->m_type_description == NULL);
    frame_19388dd7505e1ab039cceea20e8cd8b5 = cache_frame_19388dd7505e1ab039cceea20e8cd8b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19388dd7505e1ab039cceea20e8cd8b5);
    assert(Py_REFCNT(frame_19388dd7505e1ab039cceea20e8cd8b5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_19388dd7505e1ab039cceea20e8cd8b5->m_frame.f_lineno = 119;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_theme);
        tmp_args_element_value_2 = par_theme;
        CHECK_OBJECT(par_options);
        tmp_args_element_value_3 = par_options;
        frame_19388dd7505e1ab039cceea20e8cd8b5->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 120;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        frame_19388dd7505e1ab039cceea20e8cd8b5->m_frame.f_lineno = 120;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19388dd7505e1ab039cceea20e8cd8b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19388dd7505e1ab039cceea20e8cd8b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19388dd7505e1ab039cceea20e8cd8b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19388dd7505e1ab039cceea20e8cd8b5,
        type_description_1,
        par_theme,
        par_options,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_19388dd7505e1ab039cceea20e8cd8b5 == cache_frame_19388dd7505e1ab039cceea20e8cd8b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19388dd7505e1ab039cceea20e8cd8b5);
        cache_frame_19388dd7505e1ab039cceea20e8cd8b5 = NULL;
    }

    assertFrameObject(frame_19388dd7505e1ab039cceea20e8cd8b5);

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
    CHECK_OBJECT(par_theme);
    Py_DECREF(par_theme);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_theme);
    Py_DECREF(par_theme);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config$$$function__3_create_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_theme = python_pars[0];
    PyObject *par_options = python_pars[1];
    PyObject *var_local_config = NULL;
    struct Nuitka_FrameObject *frame_af67c1f70fb7711e6278f7aeeadfea1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_af67c1f70fb7711e6278f7aeeadfea1d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_af67c1f70fb7711e6278f7aeeadfea1d)) {
        Py_XDECREF(cache_frame_af67c1f70fb7711e6278f7aeeadfea1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af67c1f70fb7711e6278f7aeeadfea1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af67c1f70fb7711e6278f7aeeadfea1d = MAKE_FUNCTION_FRAME(codeobj_af67c1f70fb7711e6278f7aeeadfea1d, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af67c1f70fb7711e6278f7aeeadfea1d->m_type_description == NULL);
    frame_af67c1f70fb7711e6278f7aeeadfea1d = cache_frame_af67c1f70fb7711e6278f7aeeadfea1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af67c1f70fb7711e6278f7aeeadfea1d);
    assert(Py_REFCNT(frame_af67c1f70fb7711e6278f7aeeadfea1d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_af67c1f70fb7711e6278f7aeeadfea1d->m_frame.f_lineno = 124;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg1_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM0(tmp_dircall_arg1_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[57]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 125;
                type_description_1 = "oooccc";
                goto tuple_build_exception_1;
            }

            tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
            CHECK_OBJECT(par_theme);
            tmp_args_element_value_1 = par_theme;
            CHECK_OBJECT(par_options);
            tmp_args_element_value_2 = par_options;
            frame_af67c1f70fb7711e6278f7aeeadfea1d->m_frame.f_lineno = 125;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "oooccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_1 = impl___main__$$$function__9__unpack_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert(var_local_config == NULL);
        var_local_config = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_local_config);
        tmp_dircall_arg2_1 = var_local_config;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__3_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_af67c1f70fb7711e6278f7aeeadfea1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af67c1f70fb7711e6278f7aeeadfea1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af67c1f70fb7711e6278f7aeeadfea1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af67c1f70fb7711e6278f7aeeadfea1d,
        type_description_1,
        par_theme,
        par_options,
        var_local_config,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_af67c1f70fb7711e6278f7aeeadfea1d == cache_frame_af67c1f70fb7711e6278f7aeeadfea1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af67c1f70fb7711e6278f7aeeadfea1d);
        cache_frame_af67c1f70fb7711e6278f7aeeadfea1d = NULL;
    }

    assertFrameObject(frame_af67c1f70fb7711e6278f7aeeadfea1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_local_config);
    Py_DECREF(var_local_config);
    var_local_config = NULL;
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

    Py_XDECREF(var_local_config);
    var_local_config = NULL;
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
    CHECK_OBJECT(par_theme);
    Py_DECREF(par_theme);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_theme);
    Py_DECREF(par_theme);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_theme = python_pars[0];
    PyObject *par_options = python_pars[1];
    PyObject *var_validator = NULL;
    PyObject *var_THEMES = NULL;
    PyObject *var_swap = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_facb1798fa6cce890f27575e26672879;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_be0707642b700364627b8dd01584b4c1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_be0707642b700364627b8dd01584b4c1_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_facb1798fa6cce890f27575e26672879 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse$$$function__1_validator(tmp_closure_1);

        assert(var_validator == NULL);
        var_validator = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_facb1798fa6cce890f27575e26672879)) {
        Py_XDECREF(cache_frame_facb1798fa6cce890f27575e26672879);

#if _DEBUG_REFCOUNTS
        if (cache_frame_facb1798fa6cce890f27575e26672879 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_facb1798fa6cce890f27575e26672879 = MAKE_FUNCTION_FRAME(codeobj_facb1798fa6cce890f27575e26672879, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_facb1798fa6cce890f27575e26672879->m_type_description == NULL);
    frame_facb1798fa6cce890f27575e26672879 = cache_frame_facb1798fa6cce890f27575e26672879;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_facb1798fa6cce890f27575e26672879);
    assert(Py_REFCNT(frame_facb1798fa6cce890f27575e26672879) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[5];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[69];
        tmp_level_value_1 = mod_consts[2];
        frame_facb1798fa6cce890f27575e26672879->m_frame.f_lineno = 142;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[70],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_THEMES == NULL);
        var_THEMES = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_theme);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_theme);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_theme);
        tmp_cmp_expr_left_1 = par_theme;
        CHECK_OBJECT(var_THEMES);
        tmp_cmp_expr_right_1 = var_THEMES;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
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
        tmp_tuple_element_1 = mod_consts[71];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_theme);
            tmp_format_value_1 = par_theme;
            tmp_format_spec_1 = mod_consts[72];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "ooooo";
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
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[72], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_facb1798fa6cce890f27575e26672879->m_frame.f_lineno = 145;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 145;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_options);
        tmp_assign_source_3 = par_options;
        assert(var_swap == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_swap = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_THEMES);
        tmp_expression_value_1 = var_THEMES;
        CHECK_OBJECT(par_theme);
        tmp_subscript_value_1 = par_theme;
        tmp_dict_seq_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_options;
            assert(old != NULL);
            par_options = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        CHECK_OBJECT(par_options);
        tmp_dict_arg_value_1 = par_options;
        CHECK_OBJECT(var_swap);
        tmp_iterable_value_1 = var_swap;
        assert(PyDict_Check(tmp_dict_arg_value_1));
        if (HAS_ATTR_BOOL(tmp_iterable_value_1, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        }

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        if (par_options == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[73]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_options;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[74]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_facb1798fa6cce890f27575e26672879->m_frame.f_lineno = 149;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_dictcontraction_1__$0 == NULL);
        tmp_dictcontraction_1__$0 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_dictcontraction_1__contraction == NULL);
        tmp_dictcontraction_1__contraction = tmp_assign_source_6;
    }
    if (isFrameUnusable(cache_frame_be0707642b700364627b8dd01584b4c1_2)) {
        Py_XDECREF(cache_frame_be0707642b700364627b8dd01584b4c1_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be0707642b700364627b8dd01584b4c1_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be0707642b700364627b8dd01584b4c1_2 = MAKE_FUNCTION_FRAME(codeobj_be0707642b700364627b8dd01584b4c1, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be0707642b700364627b8dd01584b4c1_2->m_type_description == NULL);
    frame_be0707642b700364627b8dd01584b4c1_2 = cache_frame_be0707642b700364627b8dd01584b4c1_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be0707642b700364627b8dd01584b4c1_2);
    assert(Py_REFCNT(frame_be0707642b700364627b8dd01584b4c1_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        tmp_next_source_1 = tmp_dictcontraction_1__$0;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "ooo";
                exception_lineno = 149;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_1__iter_value_0;
            tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
        tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "ooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_2 = "ooo";
            exception_lineno = 149;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
            tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_2 = "ooo";
            exception_lineno = 149;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
            tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                    type_description_2 = "ooo";
                    exception_lineno = 149;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_2 = "ooo";
            exception_lineno = 149;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
    tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
    tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
    tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
    tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_dictcontraction$tuple_unpack_1__element_1;
        {
            PyObject *old = outline_0_var_k;
            outline_0_var_k = tmp_assign_source_11;
            Py_INCREF(outline_0_var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
    tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_dictcontraction$tuple_unpack_1__element_2;
        {
            PyObject *old = outline_0_var_v;
            outline_0_var_v = tmp_assign_source_12;
            Py_INCREF(outline_0_var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
    tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (var_validator == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }

        tmp_called_value_2 = var_validator;
        CHECK_OBJECT(outline_0_var_k);
        tmp_args_element_value_1 = outline_0_var_k;
        CHECK_OBJECT(outline_0_var_v);
        tmp_args_element_value_2 = outline_0_var_v;
        frame_be0707642b700364627b8dd01584b4c1_2->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_0_var_k);
        tmp_dictset_key = outline_0_var_k;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "ooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 149;
        type_description_2 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    tmp_return_value = tmp_dictcontraction_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
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

    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_2:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be0707642b700364627b8dd01584b4c1_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be0707642b700364627b8dd01584b4c1_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be0707642b700364627b8dd01584b4c1_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be0707642b700364627b8dd01584b4c1_2,
        type_description_2,
        outline_0_var_k,
        outline_0_var_v,
        var_validator
    );


    // Release cached frame if used for exception.
    if (frame_be0707642b700364627b8dd01584b4c1_2 == cache_frame_be0707642b700364627b8dd01584b4c1_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be0707642b700364627b8dd01584b4c1_2);
        cache_frame_be0707642b700364627b8dd01584b4c1_2 = NULL;
    }

    assertFrameObject(frame_be0707642b700364627b8dd01584b4c1_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(outline_0_var_k);
    outline_0_var_k = NULL;
    Py_XDECREF(outline_0_var_v);
    outline_0_var_v = NULL;
    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_k);
    outline_0_var_k = NULL;
    Py_XDECREF(outline_0_var_v);
    outline_0_var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 149;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_facb1798fa6cce890f27575e26672879, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_facb1798fa6cce890f27575e26672879->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_facb1798fa6cce890f27575e26672879, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_facb1798fa6cce890f27575e26672879,
        type_description_1,
        par_theme,
        par_options,
        var_validator,
        var_THEMES,
        var_swap
    );


    // Release cached frame if used for exception.
    if (frame_facb1798fa6cce890f27575e26672879 == cache_frame_facb1798fa6cce890f27575e26672879) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_facb1798fa6cce890f27575e26672879);
        cache_frame_facb1798fa6cce890f27575e26672879 = NULL;
    }

    assertFrameObject(frame_facb1798fa6cce890f27575e26672879);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_options);
    par_options = NULL;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    CHECK_OBJECT(var_THEMES);
    Py_DECREF(var_THEMES);
    var_THEMES = NULL;
    Py_XDECREF(var_swap);
    var_swap = NULL;
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

    Py_XDECREF(par_options);
    par_options = NULL;
    Py_XDECREF(var_validator);
    var_validator = NULL;
    Py_XDECREF(var_THEMES);
    var_THEMES = NULL;
    Py_XDECREF(var_swap);
    var_swap = NULL;
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
    CHECK_OBJECT(par_theme);
    Py_DECREF(par_theme);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_theme);
    Py_DECREF(par_theme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse$$$function__1_validator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_154d66eb06fbeb8b486a1071ffccf5a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_154d66eb06fbeb8b486a1071ffccf5a6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_154d66eb06fbeb8b486a1071ffccf5a6)) {
        Py_XDECREF(cache_frame_154d66eb06fbeb8b486a1071ffccf5a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_154d66eb06fbeb8b486a1071ffccf5a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_154d66eb06fbeb8b486a1071ffccf5a6 = MAKE_FUNCTION_FRAME(codeobj_154d66eb06fbeb8b486a1071ffccf5a6, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_154d66eb06fbeb8b486a1071ffccf5a6->m_type_description == NULL);
    frame_154d66eb06fbeb8b486a1071ffccf5a6 = cache_frame_154d66eb06fbeb8b486a1071ffccf5a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_154d66eb06fbeb8b486a1071ffccf5a6);
    assert(Py_REFCNT(frame_154d66eb06fbeb8b486a1071ffccf5a6) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_called_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_154d66eb06fbeb8b486a1071ffccf5a6->m_frame.f_lineno = 133;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_ValueError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 135;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto try_except_handler_2;
    }
    branch_no_1:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_154d66eb06fbeb8b486a1071ffccf5a6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_154d66eb06fbeb8b486a1071ffccf5a6, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[76];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_key);
            tmp_format_value_1 = par_key;
            tmp_format_spec_1 = mod_consts[72];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[72], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooc";
            goto try_except_handler_3;
        }
        frame_154d66eb06fbeb8b486a1071ffccf5a6->m_frame.f_lineno = 138;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 138;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto try_except_handler_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[77];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_key);
            tmp_format_value_2 = par_key;
            tmp_format_spec_2 = mod_consts[72];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_value);
            tmp_operand_value_1 = par_value;
            tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oooc";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[72];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_1 = "oooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[72], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooc";
            goto try_except_handler_3;
        }
        frame_154d66eb06fbeb8b486a1071ffccf5a6->m_frame.f_lineno = 140;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 140;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto try_except_handler_3;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 132;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_154d66eb06fbeb8b486a1071ffccf5a6->m_frame) frame_154d66eb06fbeb8b486a1071ffccf5a6->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooc";
    goto try_except_handler_3;
    branch_end_3:;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_154d66eb06fbeb8b486a1071ffccf5a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_154d66eb06fbeb8b486a1071ffccf5a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_154d66eb06fbeb8b486a1071ffccf5a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_154d66eb06fbeb8b486a1071ffccf5a6,
        type_description_1,
        par_key,
        par_value,
        var_result,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_154d66eb06fbeb8b486a1071ffccf5a6 == cache_frame_154d66eb06fbeb8b486a1071ffccf5a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_154d66eb06fbeb8b486a1071ffccf5a6);
        cache_frame_154d66eb06fbeb8b486a1071ffccf5a6 = NULL;
    }

    assertFrameObject(frame_154d66eb06fbeb8b486a1071ffccf5a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    struct Nuitka_FrameObject *frame_21e943202cc60665bec982cf88a178b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_21e943202cc60665bec982cf88a178b0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21e943202cc60665bec982cf88a178b0)) {
        Py_XDECREF(cache_frame_21e943202cc60665bec982cf88a178b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21e943202cc60665bec982cf88a178b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21e943202cc60665bec982cf88a178b0 = MAKE_FUNCTION_FRAME(codeobj_21e943202cc60665bec982cf88a178b0, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21e943202cc60665bec982cf88a178b0->m_type_description == NULL);
    frame_21e943202cc60665bec982cf88a178b0 = cache_frame_21e943202cc60665bec982cf88a178b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21e943202cc60665bec982cf88a178b0);
    assert(Py_REFCNT(frame_21e943202cc60665bec982cf88a178b0) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[2]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_called_value_16;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 156;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 157;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 157;
        tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[81]);

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 157;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 158;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 158;
        tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[49]);

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 158;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 159;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 159;
        tmp_kw_call_value_3_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_kw_call_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);

            exception_lineno = 159;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 160;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 160;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 160;
        tmp_kw_call_value_4_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_1);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);

            exception_lineno = 160;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 161;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 161;
        tmp_kw_call_value_5_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 161;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 162;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 162;
        tmp_kw_call_value_6_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_kw_call_value_6_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);

            exception_lineno = 162;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 163;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 163;
        tmp_kw_call_value_7_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);

            exception_lineno = 163;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 164;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 164;
        tmp_kw_call_value_8_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_kw_call_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);

            exception_lineno = 164;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 165;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 165;
        tmp_kw_call_value_9_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        if (tmp_kw_call_value_9_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 165;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);

            exception_lineno = 166;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 166;
        tmp_kw_call_value_10_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_kw_call_value_10_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);

            exception_lineno = 166;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);

            exception_lineno = 167;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 167;
        tmp_kw_call_value_11_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_kw_call_value_11_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);

            exception_lineno = 167;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);
            Py_DECREF(tmp_kw_call_value_11_1);

            exception_lineno = 168;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 168;
        tmp_kw_call_value_12_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_kw_call_value_12_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);
            Py_DECREF(tmp_kw_call_value_11_1);

            exception_lineno = 168;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);
            Py_DECREF(tmp_kw_call_value_11_1);
            Py_DECREF(tmp_kw_call_value_12_1);

            exception_lineno = 169;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 169;
        tmp_kw_call_value_13_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[86]);

        if (tmp_kw_call_value_13_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);
            Py_DECREF(tmp_kw_call_value_11_1);
            Py_DECREF(tmp_kw_call_value_12_1);

            exception_lineno = 169;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);
            Py_DECREF(tmp_kw_call_value_11_1);
            Py_DECREF(tmp_kw_call_value_12_1);
            Py_DECREF(tmp_kw_call_value_13_1);

            exception_lineno = 170;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 170;
        tmp_kw_call_value_14_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[86]);

        if (tmp_kw_call_value_14_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_kw_call_value_1_1);
            Py_DECREF(tmp_kw_call_value_2_1);
            Py_DECREF(tmp_kw_call_value_3_1);
            Py_DECREF(tmp_kw_call_value_4_1);
            Py_DECREF(tmp_kw_call_value_5_1);
            Py_DECREF(tmp_kw_call_value_6_1);
            Py_DECREF(tmp_kw_call_value_7_1);
            Py_DECREF(tmp_kw_call_value_8_1);
            Py_DECREF(tmp_kw_call_value_9_1);
            Py_DECREF(tmp_kw_call_value_10_1);
            Py_DECREF(tmp_kw_call_value_11_1);
            Py_DECREF(tmp_kw_call_value_12_1);
            Py_DECREF(tmp_kw_call_value_13_1);

            exception_lineno = 170;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 155;
        {
            PyObject *kw_values[15] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        Py_DECREF(tmp_kw_call_value_7_1);
        Py_DECREF(tmp_kw_call_value_8_1);
        Py_DECREF(tmp_kw_call_value_9_1);
        Py_DECREF(tmp_kw_call_value_10_1);
        Py_DECREF(tmp_kw_call_value_11_1);
        Py_DECREF(tmp_kw_call_value_12_1);
        Py_DECREF(tmp_kw_call_value_13_1);
        Py_DECREF(tmp_kw_call_value_14_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "cc";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[88]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "cc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "cc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = self->m_closure[2];
            Py_INCREF(tmp_closure_1[1]);

            tmp_all_arg_1 = MAKE_GENERATOR_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_operand_value_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 173;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_17 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_21e943202cc60665bec982cf88a178b0->m_frame.f_lineno = 175;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_all_arg_2;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_3;
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "cc";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[88]);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "cc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_1 = "cc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_2__$0 == NULL);
            tmp_genexpr_2__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_2[2];

            tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
            tmp_closure_2[1] = self->m_closure[0];
            Py_INCREF(tmp_closure_2[1]);

            tmp_all_arg_2 = MAKE_GENERATOR_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr(tmp_closure_2);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_operand_value_2 = BUILTIN_ALL(tmp_all_arg_2);
        Py_DECREF(tmp_all_arg_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 176;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21e943202cc60665bec982cf88a178b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21e943202cc60665bec982cf88a178b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21e943202cc60665bec982cf88a178b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21e943202cc60665bec982cf88a178b0,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_21e943202cc60665bec982cf88a178b0 == cache_frame_21e943202cc60665bec982cf88a178b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21e943202cc60665bec982cf88a178b0);
        cache_frame_21e943202cc60665bec982cf88a178b0 = NULL;
    }

    assertFrameObject(frame_21e943202cc60665bec982cf88a178b0);

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



struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr_locals {
    PyObject *var_k;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr_locals *generator_heap = (struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_27f1544bab6ab4f78fe31ac295f5c5c3, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 173;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_cmp_expr_left_1 = generator_heap->var_k;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[75]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 173;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 173;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            NULL,
            generator_heap->var_k,
            generator->m_closure[1]
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
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr_context,
        module_alive_progress$core$configuration,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[90],
#endif
        codeobj_27f1544bab6ab4f78fe31ac295f5c5c3,
        closure,
        2,
        sizeof(struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__1_genexpr_locals)
    );
}



struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr_locals {
    PyObject *var_k;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr_locals *generator_heap = (struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_17e424a84f3f5ef62cfa43877da08fb2, module_alive_progress$core$configuration, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 176;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_cmp_expr_left_1 = generator_heap->var_k;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[64]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 176;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            NULL,
            generator_heap->var_k,
            generator->m_closure[1]
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
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr_context,
        module_alive_progress$core$configuration,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[90],
#endif
        codeobj_17e424a84f3f5ef62cfa43877da08fb2,
        closure,
        2,
        sizeof(struct alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init$$$genexpr__2_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15face545fd0c90fa0e85fd7e0891a74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__1_reset(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config$$$function__1_reset,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_e0a3ffd829e8b373fa28514b57bfd055,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        mod_consts[46],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__2_set_global(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config$$$function__2_set_global,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_19388dd7505e1ab039cceea20e8cd8b5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        mod_consts[50],
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__3_create_context(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config$$$function__3_create_context,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_af67c1f70fb7711e6278f7aeeadfea1d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        mod_consts[53],
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_facb1798fa6cce890f27575e26672879,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        mod_consts[56],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse$$$function__1_validator(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse$$$function__1_validator,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[68],
#endif
        codeobj_154d66eb06fbeb8b486a1071ffccf5a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_21e943202cc60665bec982cf88a178b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__1__spinner_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__1__spinner_input_factory,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_71bb0d403a2958760187257872ccffb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__2__bar_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__2__bar_input_factory,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b5c3858f6af6ef593b2b284c8bd4f13c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__3___style_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__3___style_input_factory,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_82953e87abd78619584244aa101a5d27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__3___style_input_factory$$$function__1__input(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__3___style_input_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_bc0e952f3b41f9655b0e66f7dd34097f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__4___name_lookup_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__4___name_lookup_factory,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7625c7363b8a16b92ebce567f04d60d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__4___name_lookup_factory$$$function__1__input(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__4___name_lookup_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_e3c34169732fe2187ab767a5cda71b2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__5___func_lookup_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__5___func_lookup_factory,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d1b72b579b2cafc6f3b18aa73f73e639,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__5___func_lookup_factory$$$function__1__input(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__5___func_lookup_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[25],
#endif
        codeobj_cf43c3f3c922499192daeffae42eb2d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__6__int_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__6__int_input_factory,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_21ae65dc62153fcaa21badb6baa794a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__6__int_input_factory$$$function__1__input(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__6__int_input_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        codeobj_444deb235eee6ad64d3d3bf810140cf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__7__bool_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__7__bool_input_factory,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee17a756ee541139e415d0cc77116362,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__7__bool_input_factory$$$function__1__input() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__7__bool_input_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_19e1f86bfc75d13ee655e90ab8ab1cb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__8__force_tty_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__8__force_tty_input_factory,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df3b6ce9a19967ea349d74070245368f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__8__force_tty_input_factory$$$function__1__input(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__8__force_tty_input_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_741648707950d56222b9485c72228055,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__9__text_input_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__9__text_input_factory,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc63984699b8a8f0bcaf4eaa5a41c095,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$core$configuration$$$function__9__text_input_factory$$$function__1__input() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$core$configuration$$$function__9__text_input_factory$$$function__1__input,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_eb208d098a562a71a71ff8828aec0e38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$core$configuration,
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

function_impl_code functable_alive_progress$core$configuration[] = {
    impl_alive_progress$core$configuration$$$function__3___style_input_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__4___name_lookup_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__5___func_lookup_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__6__int_input_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__7__bool_input_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__8__force_tty_input_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__9__text_input_factory$$$function__1__input,
    impl_alive_progress$core$configuration$$$function__10_create_config$$$function__1_reset,
    impl_alive_progress$core$configuration$$$function__10_create_config$$$function__2_set_global,
    impl_alive_progress$core$configuration$$$function__10_create_config$$$function__3_create_context,
    impl_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse,
    impl_alive_progress$core$configuration$$$function__10_create_config$$$function__5_lazy_init,
    impl_alive_progress$core$configuration$$$function__10_create_config$$$function__4__parse$$$function__1_validator,
    impl_alive_progress$core$configuration$$$function__1__spinner_input_factory,
    impl_alive_progress$core$configuration$$$function__2__bar_input_factory,
    impl_alive_progress$core$configuration$$$function__3___style_input_factory,
    impl_alive_progress$core$configuration$$$function__4___name_lookup_factory,
    impl_alive_progress$core$configuration$$$function__5___func_lookup_factory,
    impl_alive_progress$core$configuration$$$function__6__int_input_factory,
    impl_alive_progress$core$configuration$$$function__7__bool_input_factory,
    impl_alive_progress$core$configuration$$$function__8__force_tty_input_factory,
    impl_alive_progress$core$configuration$$$function__9__text_input_factory,
    impl_alive_progress$core$configuration$$$function__10_create_config,
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

    function_impl_code *current = functable_alive_progress$core$configuration;
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

    if (offset > sizeof(functable_alive_progress$core$configuration) || offset < 0) {
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
        functable_alive_progress$core$configuration[offset],
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
        module_alive_progress$core$configuration,
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
PyObject *modulecode_alive_progress$core$configuration(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("alive_progress.core.configuration");

    // Store the module for future use.
    module_alive_progress$core$configuration = module;

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
        PRINT_STRING("alive_progress.core.configuration: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.core.configuration: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.core.configuration: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initalive_progress$core$configuration\n");

    moduledict_alive_progress$core$configuration = MODULE_DICT(module_alive_progress$core$configuration);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_alive_progress$core$configuration,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_alive_progress$core$configuration,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[72]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_alive_progress$core$configuration,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_alive_progress$core$configuration,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_alive_progress$core$configuration,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_alive_progress$core$configuration);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_alive_progress$core$configuration);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b96c0da8a48675f7161b6ea4204fea07;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_2);
    }
    frame_b96c0da8a48675f7161b6ea4204fea07 = MAKE_MODULE_FRAME(codeobj_b96c0da8a48675f7161b6ea4204fea07, module_alive_progress$core$configuration);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b96c0da8a48675f7161b6ea4204fea07);
    assert(Py_REFCNT(frame_b96c0da8a48675f7161b6ea4204fea07) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[93], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[94], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[98];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[99];
        tmp_level_value_1 = mod_consts[4];
        frame_b96c0da8a48675f7161b6ea4204fea07->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[100],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[26],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[26]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[101];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_alive_progress$core$configuration;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[102];
        tmp_level_value_2 = mod_consts[2];
        frame_b96c0da8a48675f7161b6ea4204fea07->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[43],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[43]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_alive_progress$core$configuration,
                mod_consts[42],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[42]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = (PyObject *)&PyBaseObject_Type;
        frame_b96c0da8a48675f7161b6ea4204fea07->m_frame.f_lineno = 8;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__1__spinner_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__2__bar_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__3___style_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__4___name_lookup_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__5___func_lookup_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__6__int_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__7__bool_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__8__force_tty_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__9__text_input_factory();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_b96c0da8a48675f7161b6ea4204fea07->m_frame.f_lineno = 88;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[103]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_alive_progress$core$configuration$$$function__10_create_config();

        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        assert(!(tmp_called_value_3 == NULL));
        frame_b96c0da8a48675f7161b6ea4204fea07->m_frame.f_lineno = 183;
        tmp_assign_source_23 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_23);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b96c0da8a48675f7161b6ea4204fea07, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b96c0da8a48675f7161b6ea4204fea07->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b96c0da8a48675f7161b6ea4204fea07, exception_lineno);
    }



    assertFrameObject(frame_b96c0da8a48675f7161b6ea4204fea07);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("alive_progress.core.configuration", false);

    Py_INCREF(module_alive_progress$core$configuration);
    return module_alive_progress$core$configuration;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$core$configuration, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("alive_progress$core$configuration", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
