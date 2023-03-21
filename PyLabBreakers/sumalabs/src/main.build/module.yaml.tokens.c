/* Generated code for Python module 'yaml.tokens'
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

/* The "module_yaml$tokens" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_yaml$tokens;
PyDictObject *moduledict_yaml$tokens;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[98];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[98];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("yaml.tokens"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 98; i++) {
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
void checkModuleConstants_yaml$tokens(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 98; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ef069e4fd2aa05de71b12c26dd7c73a7;
static PyCodeObject *codeobj_a370d37d64d31956b11884fcd8be9c3c;
static PyCodeObject *codeobj_27b89517e9f1b8d043c2adcda034d256;
static PyCodeObject *codeobj_5e9dac947e3cbcad5a0db85881158b2b;
static PyCodeObject *codeobj_3eecb258ea2ee25aebd111632321017c;
static PyCodeObject *codeobj_163fa865ca126dcfb392982c3abb4728;
static PyCodeObject *codeobj_34c6d57b5f3122104e5e8a993fe5e81f;
static PyCodeObject *codeobj_c9040a904052af543b2360aa66418046;
static PyCodeObject *codeobj_b7b7f42dfb17cf64c02f4954f0cadefe;
static PyCodeObject *codeobj_51ee08c7f3bcb7348c0566e5aaeb1376;
static PyCodeObject *codeobj_b4a8d91b841376f784af68e732ba5e1f;
static PyCodeObject *codeobj_1bf634653e15f5194183b01e4b70cebc;
static PyCodeObject *codeobj_7368e58bfaedb2adbd970b3ee928824f;
static PyCodeObject *codeobj_ca608af18bf9f01653c202703e17a3fb;
static PyCodeObject *codeobj_ad77ec5482514b752524926e35b67957;
static PyCodeObject *codeobj_9da4c70ceff101d7aada1a326cdf245c;
static PyCodeObject *codeobj_b4f78064e9c9de0b84cb70f8b1b27b90;
static PyCodeObject *codeobj_1951eccc5ba20645a944c8d8099f3144;
static PyCodeObject *codeobj_69c7db615edb995aa2c7abe97685a71d;
static PyCodeObject *codeobj_461f53454e60d4f997c4bd0f96eafd1e;
static PyCodeObject *codeobj_7caea93d3e18d72747290f7263561aa5;
static PyCodeObject *codeobj_75c5313bc6c0fdb748262941271571c8;
static PyCodeObject *codeobj_4b5b6b4375e2dce7f8c922aa05d86282;
static PyCodeObject *codeobj_e12143cfeca017b4e147329fabb77809;
static PyCodeObject *codeobj_957a075f67a83f8bf2ea29351e4e7fc0;
static PyCodeObject *codeobj_a04a14d75ef62b1cee734c3481132e55;
static PyCodeObject *codeobj_90b3148fbded4799b06ac05743cf928a;
static PyCodeObject *codeobj_247714a8a9da3f6c59732c855f2462e7;
static PyCodeObject *codeobj_e1f87fa65b34feba91a1f468d99806b2;
static PyCodeObject *codeobj_fe5734cd6138e0d5af02487451689e6c;
static PyCodeObject *codeobj_c3462bfc20f833c4c28e41cda9f142e7;
static PyCodeObject *codeobj_574cc87357dd9da53c3c801d4344ecae;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[85]); CHECK_OBJECT(module_filename_obj);
    codeobj_ef069e4fd2aa05de71b12c26dd7c73a7 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[87], NULL, 1, 0, 0);
    codeobj_a370d37d64d31956b11884fcd8be9c3c = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[88], NULL, 1, 0, 0);
    codeobj_27b89517e9f1b8d043c2adcda034d256 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[89], mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_5e9dac947e3cbcad5a0db85881158b2b = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[90], NULL, 0, 0, 0);
    codeobj_3eecb258ea2ee25aebd111632321017c = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[90], NULL, 0, 0, 0);
    codeobj_163fa865ca126dcfb392982c3abb4728 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[90], NULL, 0, 0, 0);
    codeobj_34c6d57b5f3122104e5e8a993fe5e81f = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[90], NULL, 0, 0, 0);
    codeobj_c9040a904052af543b2360aa66418046 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[90], NULL, 0, 0, 0);
    codeobj_b7b7f42dfb17cf64c02f4954f0cadefe = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[90], NULL, 0, 0, 0);
    codeobj_51ee08c7f3bcb7348c0566e5aaeb1376 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[90], NULL, 0, 0, 0);
    codeobj_b4a8d91b841376f784af68e732ba5e1f = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[90], NULL, 0, 0, 0);
    codeobj_1bf634653e15f5194183b01e4b70cebc = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[90], NULL, 0, 0, 0);
    codeobj_7368e58bfaedb2adbd970b3ee928824f = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[90], NULL, 0, 0, 0);
    codeobj_ca608af18bf9f01653c202703e17a3fb = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[90], NULL, 0, 0, 0);
    codeobj_ad77ec5482514b752524926e35b67957 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[90], NULL, 0, 0, 0);
    codeobj_9da4c70ceff101d7aada1a326cdf245c = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[90], NULL, 0, 0, 0);
    codeobj_b4f78064e9c9de0b84cb70f8b1b27b90 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[90], NULL, 0, 0, 0);
    codeobj_1951eccc5ba20645a944c8d8099f3144 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[90], NULL, 0, 0, 0);
    codeobj_69c7db615edb995aa2c7abe97685a71d = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[90], NULL, 0, 0, 0);
    codeobj_461f53454e60d4f997c4bd0f96eafd1e = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[90], NULL, 0, 0, 0);
    codeobj_7caea93d3e18d72747290f7263561aa5 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[90], NULL, 0, 0, 0);
    codeobj_75c5313bc6c0fdb748262941271571c8 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[90], NULL, 0, 0, 0);
    codeobj_4b5b6b4375e2dce7f8c922aa05d86282 = MAKE_CODE_OBJECT(module_filename_obj, 2, CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[90], NULL, 0, 0, 0);
    codeobj_e12143cfeca017b4e147329fabb77809 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[90], NULL, 0, 0, 0);
    codeobj_957a075f67a83f8bf2ea29351e4e7fc0 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[91], NULL, 5, 0, 0);
    codeobj_a04a14d75ef62b1cee734c3481132e55 = MAKE_CODE_OBJECT(module_filename_obj, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[92], NULL, 3, 0, 0);
    codeobj_90b3148fbded4799b06ac05743cf928a = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[93], NULL, 4, 0, 0);
    codeobj_247714a8a9da3f6c59732c855f2462e7 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[94], NULL, 6, 0, 0);
    codeobj_e1f87fa65b34feba91a1f468d99806b2 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[95], NULL, 4, 0, 0);
    codeobj_fe5734cd6138e0d5af02487451689e6c = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[95], NULL, 4, 0, 0);
    codeobj_c3462bfc20f833c4c28e41cda9f142e7 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[95], NULL, 4, 0, 0);
    codeobj_574cc87357dd9da53c3c801d4344ecae = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[96], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__1___init__();


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__2___repr__();


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__3___init__();


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__4___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__5___init__();


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__6___init__();


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__7___init__();


static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__8___init__(PyObject *defaults);


// The module function definitions.
static PyObject *impl_yaml$tokens$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_start_mark = python_pars[1];
    PyObject *par_end_mark = python_pars[2];
    struct Nuitka_FrameObject *frame_a04a14d75ef62b1cee734c3481132e55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a04a14d75ef62b1cee734c3481132e55 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a04a14d75ef62b1cee734c3481132e55)) {
        Py_XDECREF(cache_frame_a04a14d75ef62b1cee734c3481132e55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a04a14d75ef62b1cee734c3481132e55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a04a14d75ef62b1cee734c3481132e55 = MAKE_FUNCTION_FRAME(codeobj_a04a14d75ef62b1cee734c3481132e55, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a04a14d75ef62b1cee734c3481132e55->m_type_description == NULL);
    frame_a04a14d75ef62b1cee734c3481132e55 = cache_frame_a04a14d75ef62b1cee734c3481132e55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a04a14d75ef62b1cee734c3481132e55);
    assert(Py_REFCNT(frame_a04a14d75ef62b1cee734c3481132e55) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_1 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_2 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a04a14d75ef62b1cee734c3481132e55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a04a14d75ef62b1cee734c3481132e55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a04a14d75ef62b1cee734c3481132e55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a04a14d75ef62b1cee734c3481132e55,
        type_description_1,
        par_self,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame if used for exception.
    if (frame_a04a14d75ef62b1cee734c3481132e55 == cache_frame_a04a14d75ef62b1cee734c3481132e55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a04a14d75ef62b1cee734c3481132e55);
        cache_frame_a04a14d75ef62b1cee734c3481132e55 = NULL;
    }

    assertFrameObject(frame_a04a14d75ef62b1cee734c3481132e55);

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
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_yaml$tokens$$$function__2___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_attributes = NULL;
    PyObject *var_arguments = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *outline_1_var_key = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_574cc87357dd9da53c3c801d4344ecae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_ef069e4fd2aa05de71b12c26dd7c73a7_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_a370d37d64d31956b11884fcd8be9c3c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a370d37d64d31956b11884fcd8be9c3c_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_574cc87357dd9da53c3c801d4344ecae = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_574cc87357dd9da53c3c801d4344ecae)) {
        Py_XDECREF(cache_frame_574cc87357dd9da53c3c801d4344ecae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_574cc87357dd9da53c3c801d4344ecae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_574cc87357dd9da53c3c801d4344ecae = MAKE_FUNCTION_FRAME(codeobj_574cc87357dd9da53c3c801d4344ecae, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_574cc87357dd9da53c3c801d4344ecae->m_type_description == NULL);
    frame_574cc87357dd9da53c3c801d4344ecae = cache_frame_574cc87357dd9da53c3c801d4344ecae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_574cc87357dd9da53c3c801d4344ecae);
    assert(Py_REFCNT(frame_574cc87357dd9da53c3c801d4344ecae) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2)) {
            Py_XDECREF(cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2 = MAKE_FUNCTION_FRAME(codeobj_ef069e4fd2aa05de71b12c26dd7c73a7, module_yaml$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2->m_type_description == NULL);
        frame_ef069e4fd2aa05de71b12c26dd7c73a7_2 = cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ef069e4fd2aa05de71b12c26dd7c73a7_2);
        assert(Py_REFCNT(frame_ef069e4fd2aa05de71b12c26dd7c73a7_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 7;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_5;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(outline_0_var_key);
            tmp_expression_value_2 = outline_0_var_key;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            frame_ef069e4fd2aa05de71b12c26dd7c73a7_2->m_frame.f_lineno = 8;
            tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[3]);

            Py_DECREF(tmp_called_value_1);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;
                type_description_2 = "o";
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
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_append_value_1 = outline_0_var_key;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 7;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

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
            exception_tb = MAKE_TRACEBACK(frame_ef069e4fd2aa05de71b12c26dd7c73a7_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ef069e4fd2aa05de71b12c26dd7c73a7_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ef069e4fd2aa05de71b12c26dd7c73a7_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ef069e4fd2aa05de71b12c26dd7c73a7_2,
            type_description_2,
            outline_0_var_key
        );


        // Release cached frame if used for exception.
        if (frame_ef069e4fd2aa05de71b12c26dd7c73a7_2 == cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2);
            cache_frame_ef069e4fd2aa05de71b12c26dd7c73a7_2 = NULL;
        }

        assertFrameObject(frame_ef069e4fd2aa05de71b12c26dd7c73a7_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 7;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_attributes == NULL);
        var_attributes = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_attributes);
        tmp_expression_value_3 = var_attributes;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_574cc87357dd9da53c3c801d4344ecae->m_frame.f_lineno = 9;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[5];
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(var_attributes);
            tmp_iter_arg_2 = var_attributes;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_8;
        }
        if (isFrameUnusable(cache_frame_a370d37d64d31956b11884fcd8be9c3c_3)) {
            Py_XDECREF(cache_frame_a370d37d64d31956b11884fcd8be9c3c_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a370d37d64d31956b11884fcd8be9c3c_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a370d37d64d31956b11884fcd8be9c3c_3 = MAKE_FUNCTION_FRAME(codeobj_a370d37d64d31956b11884fcd8be9c3c, module_yaml$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a370d37d64d31956b11884fcd8be9c3c_3->m_type_description == NULL);
        frame_a370d37d64d31956b11884fcd8be9c3c_3 = cache_frame_a370d37d64d31956b11884fcd8be9c3c_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a370d37d64d31956b11884fcd8be9c3c_3);
        assert(Py_REFCNT(frame_a370d37d64d31956b11884fcd8be9c3c_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_9 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 10;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_key;
                outline_1_var_key = tmp_assign_source_10;
                Py_INCREF(outline_1_var_key);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_mod_expr_left_1;
            PyObject *tmp_mod_expr_right_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_mod_expr_left_1 = mod_consts[6];
            CHECK_OBJECT(outline_1_var_key);
            tmp_tuple_element_1 = outline_1_var_key;
            tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
                CHECK_OBJECT(par_self);
                tmp_getattr_target_1 = par_self;
                CHECK_OBJECT(outline_1_var_key);
                tmp_getattr_attr_1 = outline_1_var_key;
                tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 10;
                    type_description_2 = "oo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_mod_expr_right_1);
            goto try_except_handler_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_append_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
            Py_DECREF(tmp_mod_expr_right_1);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_2 = "oo";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_iterable_value_1 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a370d37d64d31956b11884fcd8be9c3c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a370d37d64d31956b11884fcd8be9c3c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a370d37d64d31956b11884fcd8be9c3c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a370d37d64d31956b11884fcd8be9c3c_3,
            type_description_2,
            outline_1_var_key,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_a370d37d64d31956b11884fcd8be9c3c_3 == cache_frame_a370d37d64d31956b11884fcd8be9c3c_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a370d37d64d31956b11884fcd8be9c3c_3);
            cache_frame_a370d37d64d31956b11884fcd8be9c3c_3 = NULL;
        }

        assertFrameObject(frame_a370d37d64d31956b11884fcd8be9c3c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_key);
        outline_1_var_key = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_key);
        outline_1_var_key = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 10;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_assign_source_6 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_arguments == NULL);
        var_arguments = tmp_assign_source_6;
    }
    {
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        tmp_mod_expr_left_2 = mod_consts[7];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_arguments);
        tmp_tuple_element_2 = var_arguments;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_574cc87357dd9da53c3c801d4344ecae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_574cc87357dd9da53c3c801d4344ecae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_574cc87357dd9da53c3c801d4344ecae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_574cc87357dd9da53c3c801d4344ecae,
        type_description_1,
        par_self,
        var_attributes,
        var_arguments
    );


    // Release cached frame if used for exception.
    if (frame_574cc87357dd9da53c3c801d4344ecae == cache_frame_574cc87357dd9da53c3c801d4344ecae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_574cc87357dd9da53c3c801d4344ecae);
        cache_frame_574cc87357dd9da53c3c801d4344ecae = NULL;
    }

    assertFrameObject(frame_574cc87357dd9da53c3c801d4344ecae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attributes);
    Py_DECREF(var_attributes);
    var_attributes = NULL;
    CHECK_OBJECT(var_arguments);
    Py_DECREF(var_arguments);
    var_arguments = NULL;
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

    Py_XDECREF(var_attributes);
    var_attributes = NULL;
    Py_XDECREF(var_arguments);
    var_arguments = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

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


static PyObject *impl_yaml$tokens$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_start_mark = python_pars[3];
    PyObject *par_end_mark = python_pars[4];
    struct Nuitka_FrameObject *frame_957a075f67a83f8bf2ea29351e4e7fc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_957a075f67a83f8bf2ea29351e4e7fc0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_957a075f67a83f8bf2ea29351e4e7fc0)) {
        Py_XDECREF(cache_frame_957a075f67a83f8bf2ea29351e4e7fc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_957a075f67a83f8bf2ea29351e4e7fc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_957a075f67a83f8bf2ea29351e4e7fc0 = MAKE_FUNCTION_FRAME(codeobj_957a075f67a83f8bf2ea29351e4e7fc0, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_957a075f67a83f8bf2ea29351e4e7fc0->m_type_description == NULL);
    frame_957a075f67a83f8bf2ea29351e4e7fc0 = cache_frame_957a075f67a83f8bf2ea29351e4e7fc0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_957a075f67a83f8bf2ea29351e4e7fc0);
    assert(Py_REFCNT(frame_957a075f67a83f8bf2ea29351e4e7fc0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_2 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_3 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[0], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_4 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[1], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_957a075f67a83f8bf2ea29351e4e7fc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_957a075f67a83f8bf2ea29351e4e7fc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_957a075f67a83f8bf2ea29351e4e7fc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_957a075f67a83f8bf2ea29351e4e7fc0,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame if used for exception.
    if (frame_957a075f67a83f8bf2ea29351e4e7fc0 == cache_frame_957a075f67a83f8bf2ea29351e4e7fc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_957a075f67a83f8bf2ea29351e4e7fc0);
        cache_frame_957a075f67a83f8bf2ea29351e4e7fc0 = NULL;
    }

    assertFrameObject(frame_957a075f67a83f8bf2ea29351e4e7fc0);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_yaml$tokens$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_start_mark = python_pars[1];
    PyObject *par_end_mark = python_pars[2];
    PyObject *par_encoding = python_pars[3];
    struct Nuitka_FrameObject *frame_90b3148fbded4799b06ac05743cf928a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90b3148fbded4799b06ac05743cf928a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90b3148fbded4799b06ac05743cf928a)) {
        Py_XDECREF(cache_frame_90b3148fbded4799b06ac05743cf928a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90b3148fbded4799b06ac05743cf928a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90b3148fbded4799b06ac05743cf928a = MAKE_FUNCTION_FRAME(codeobj_90b3148fbded4799b06ac05743cf928a, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90b3148fbded4799b06ac05743cf928a->m_type_description == NULL);
    frame_90b3148fbded4799b06ac05743cf928a = cache_frame_90b3148fbded4799b06ac05743cf928a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90b3148fbded4799b06ac05743cf928a);
    assert(Py_REFCNT(frame_90b3148fbded4799b06ac05743cf928a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_1 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_2 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_encoding);
        tmp_assattr_value_3 = par_encoding;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90b3148fbded4799b06ac05743cf928a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90b3148fbded4799b06ac05743cf928a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90b3148fbded4799b06ac05743cf928a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90b3148fbded4799b06ac05743cf928a,
        type_description_1,
        par_self,
        par_start_mark,
        par_end_mark,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_90b3148fbded4799b06ac05743cf928a == cache_frame_90b3148fbded4799b06ac05743cf928a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90b3148fbded4799b06ac05743cf928a);
        cache_frame_90b3148fbded4799b06ac05743cf928a = NULL;
    }

    assertFrameObject(frame_90b3148fbded4799b06ac05743cf928a);

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
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_yaml$tokens$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_start_mark = python_pars[2];
    PyObject *par_end_mark = python_pars[3];
    struct Nuitka_FrameObject *frame_e1f87fa65b34feba91a1f468d99806b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e1f87fa65b34feba91a1f468d99806b2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e1f87fa65b34feba91a1f468d99806b2)) {
        Py_XDECREF(cache_frame_e1f87fa65b34feba91a1f468d99806b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1f87fa65b34feba91a1f468d99806b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1f87fa65b34feba91a1f468d99806b2 = MAKE_FUNCTION_FRAME(codeobj_e1f87fa65b34feba91a1f468d99806b2, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1f87fa65b34feba91a1f468d99806b2->m_type_description == NULL);
    frame_e1f87fa65b34feba91a1f468d99806b2 = cache_frame_e1f87fa65b34feba91a1f468d99806b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e1f87fa65b34feba91a1f468d99806b2);
    assert(Py_REFCNT(frame_e1f87fa65b34feba91a1f468d99806b2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_2 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_3 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1f87fa65b34feba91a1f468d99806b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1f87fa65b34feba91a1f468d99806b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1f87fa65b34feba91a1f468d99806b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1f87fa65b34feba91a1f468d99806b2,
        type_description_1,
        par_self,
        par_value,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame if used for exception.
    if (frame_e1f87fa65b34feba91a1f468d99806b2 == cache_frame_e1f87fa65b34feba91a1f468d99806b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1f87fa65b34feba91a1f468d99806b2);
        cache_frame_e1f87fa65b34feba91a1f468d99806b2 = NULL;
    }

    assertFrameObject(frame_e1f87fa65b34feba91a1f468d99806b2);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_yaml$tokens$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_start_mark = python_pars[2];
    PyObject *par_end_mark = python_pars[3];
    struct Nuitka_FrameObject *frame_fe5734cd6138e0d5af02487451689e6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe5734cd6138e0d5af02487451689e6c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe5734cd6138e0d5af02487451689e6c)) {
        Py_XDECREF(cache_frame_fe5734cd6138e0d5af02487451689e6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe5734cd6138e0d5af02487451689e6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe5734cd6138e0d5af02487451689e6c = MAKE_FUNCTION_FRAME(codeobj_fe5734cd6138e0d5af02487451689e6c, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe5734cd6138e0d5af02487451689e6c->m_type_description == NULL);
    frame_fe5734cd6138e0d5af02487451689e6c = cache_frame_fe5734cd6138e0d5af02487451689e6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe5734cd6138e0d5af02487451689e6c);
    assert(Py_REFCNT(frame_fe5734cd6138e0d5af02487451689e6c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_2 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_3 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe5734cd6138e0d5af02487451689e6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe5734cd6138e0d5af02487451689e6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe5734cd6138e0d5af02487451689e6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe5734cd6138e0d5af02487451689e6c,
        type_description_1,
        par_self,
        par_value,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame if used for exception.
    if (frame_fe5734cd6138e0d5af02487451689e6c == cache_frame_fe5734cd6138e0d5af02487451689e6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe5734cd6138e0d5af02487451689e6c);
        cache_frame_fe5734cd6138e0d5af02487451689e6c = NULL;
    }

    assertFrameObject(frame_fe5734cd6138e0d5af02487451689e6c);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_yaml$tokens$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_start_mark = python_pars[2];
    PyObject *par_end_mark = python_pars[3];
    struct Nuitka_FrameObject *frame_c3462bfc20f833c4c28e41cda9f142e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c3462bfc20f833c4c28e41cda9f142e7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c3462bfc20f833c4c28e41cda9f142e7)) {
        Py_XDECREF(cache_frame_c3462bfc20f833c4c28e41cda9f142e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3462bfc20f833c4c28e41cda9f142e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3462bfc20f833c4c28e41cda9f142e7 = MAKE_FUNCTION_FRAME(codeobj_c3462bfc20f833c4c28e41cda9f142e7, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3462bfc20f833c4c28e41cda9f142e7->m_type_description == NULL);
    frame_c3462bfc20f833c4c28e41cda9f142e7 = cache_frame_c3462bfc20f833c4c28e41cda9f142e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3462bfc20f833c4c28e41cda9f142e7);
    assert(Py_REFCNT(frame_c3462bfc20f833c4c28e41cda9f142e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_2 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[0], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_3 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3462bfc20f833c4c28e41cda9f142e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3462bfc20f833c4c28e41cda9f142e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3462bfc20f833c4c28e41cda9f142e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3462bfc20f833c4c28e41cda9f142e7,
        type_description_1,
        par_self,
        par_value,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame if used for exception.
    if (frame_c3462bfc20f833c4c28e41cda9f142e7 == cache_frame_c3462bfc20f833c4c28e41cda9f142e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3462bfc20f833c4c28e41cda9f142e7);
        cache_frame_c3462bfc20f833c4c28e41cda9f142e7 = NULL;
    }

    assertFrameObject(frame_c3462bfc20f833c4c28e41cda9f142e7);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_yaml$tokens$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_plain = python_pars[2];
    PyObject *par_start_mark = python_pars[3];
    PyObject *par_end_mark = python_pars[4];
    PyObject *par_style = python_pars[5];
    struct Nuitka_FrameObject *frame_247714a8a9da3f6c59732c855f2462e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_247714a8a9da3f6c59732c855f2462e7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_247714a8a9da3f6c59732c855f2462e7)) {
        Py_XDECREF(cache_frame_247714a8a9da3f6c59732c855f2462e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_247714a8a9da3f6c59732c855f2462e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_247714a8a9da3f6c59732c855f2462e7 = MAKE_FUNCTION_FRAME(codeobj_247714a8a9da3f6c59732c855f2462e7, module_yaml$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_247714a8a9da3f6c59732c855f2462e7->m_type_description == NULL);
    frame_247714a8a9da3f6c59732c855f2462e7 = cache_frame_247714a8a9da3f6c59732c855f2462e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_247714a8a9da3f6c59732c855f2462e7);
    assert(Py_REFCNT(frame_247714a8a9da3f6c59732c855f2462e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_plain);
        tmp_assattr_value_2 = par_plain;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_start_mark);
        tmp_assattr_value_3 = par_start_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[0], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_end_mark);
        tmp_assattr_value_4 = par_end_mark;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[1], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_style);
        tmp_assattr_value_5 = par_style;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[13], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_247714a8a9da3f6c59732c855f2462e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_247714a8a9da3f6c59732c855f2462e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_247714a8a9da3f6c59732c855f2462e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_247714a8a9da3f6c59732c855f2462e7,
        type_description_1,
        par_self,
        par_value,
        par_plain,
        par_start_mark,
        par_end_mark,
        par_style
    );


    // Release cached frame if used for exception.
    if (frame_247714a8a9da3f6c59732c855f2462e7 == cache_frame_247714a8a9da3f6c59732c855f2462e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_247714a8a9da3f6c59732c855f2462e7);
        cache_frame_247714a8a9da3f6c59732c855f2462e7 = NULL;
    }

    assertFrameObject(frame_247714a8a9da3f6c59732c855f2462e7);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_plain);
    Py_DECREF(par_plain);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_plain);
    Py_DECREF(par_plain);
    CHECK_OBJECT(par_start_mark);
    Py_DECREF(par_start_mark);
    CHECK_OBJECT(par_end_mark);
    Py_DECREF(par_end_mark);
    CHECK_OBJECT(par_style);
    Py_DECREF(par_style);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__1___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_a04a14d75ef62b1cee734c3481132e55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__2___repr__,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_574cc87357dd9da53c3c801d4344ecae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__3___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_957a075f67a83f8bf2ea29351e4e7fc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__4___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__4___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_90b3148fbded4799b06ac05743cf928a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__5___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__5___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_e1f87fa65b34feba91a1f468d99806b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__6___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_fe5734cd6138e0d5af02487451689e6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__7___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__7___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_c3462bfc20f833c4c28e41cda9f142e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$tokens$$$function__8___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$tokens$$$function__8___init__,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_247714a8a9da3f6c59732c855f2462e7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_yaml$tokens,
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

function_impl_code functable_yaml$tokens[] = {
    impl_yaml$tokens$$$function__1___init__,
    impl_yaml$tokens$$$function__2___repr__,
    impl_yaml$tokens$$$function__3___init__,
    impl_yaml$tokens$$$function__4___init__,
    impl_yaml$tokens$$$function__5___init__,
    impl_yaml$tokens$$$function__6___init__,
    impl_yaml$tokens$$$function__7___init__,
    impl_yaml$tokens$$$function__8___init__,
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

    function_impl_code *current = functable_yaml$tokens;
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

    if (offset > sizeof(functable_yaml$tokens) || offset < 0) {
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
        functable_yaml$tokens[offset],
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
        module_yaml$tokens,
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
PyObject *modulecode_yaml$tokens(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("yaml.tokens");

    // Store the module for future use.
    module_yaml$tokens = module;

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
        PRINT_STRING("yaml.tokens: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("yaml.tokens: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("yaml.tokens: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inityaml$tokens\n");

    moduledict_yaml$tokens = MODULE_DICT(module_yaml$tokens);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_yaml$tokens,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_yaml$tokens,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[97]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_yaml$tokens,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_yaml$tokens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_yaml$tokens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_yaml$tokens);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_yaml$tokens);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_27b89517e9f1b8d043c2adcda034d256;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_yaml$tokens$$$class__1_Token_2 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_4b5b6b4375e2dce7f8c922aa05d86282_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_yaml$tokens$$$class__2_DirectiveToken_17 = NULL;
    struct Nuitka_FrameObject *frame_51ee08c7f3bcb7348c0566e5aaeb1376_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_yaml$tokens$$$class__3_DocumentStartToken_25 = NULL;
    struct Nuitka_FrameObject *frame_1bf634653e15f5194183b01e4b70cebc_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_yaml$tokens$$$class__4_DocumentEndToken_28 = NULL;
    struct Nuitka_FrameObject *frame_b4a8d91b841376f784af68e732ba5e1f_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_yaml$tokens$$$class__5_StreamStartToken_31 = NULL;
    struct Nuitka_FrameObject *frame_7caea93d3e18d72747290f7263561aa5_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_yaml$tokens$$$class__6_StreamEndToken_39 = NULL;
    struct Nuitka_FrameObject *frame_461f53454e60d4f997c4bd0f96eafd1e_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42 = NULL;
    struct Nuitka_FrameObject *frame_b7b7f42dfb17cf64c02f4954f0cadefe_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_yaml$tokens$$$class__8_BlockMappingStartToken_45 = NULL;
    struct Nuitka_FrameObject *frame_c9040a904052af543b2360aa66418046_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_yaml$tokens$$$class__9_BlockEndToken_48 = NULL;
    struct Nuitka_FrameObject *frame_163fa865ca126dcfb392982c3abb4728_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51 = NULL;
    struct Nuitka_FrameObject *frame_b4f78064e9c9de0b84cb70f8b1b27b90_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_yaml$tokens$$$class__11_FlowMappingStartToken_54 = NULL;
    struct Nuitka_FrameObject *frame_ad77ec5482514b752524926e35b67957_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57 = NULL;
    struct Nuitka_FrameObject *frame_9da4c70ceff101d7aada1a326cdf245c_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *locals_yaml$tokens$$$class__13_FlowMappingEndToken_60 = NULL;
    struct Nuitka_FrameObject *frame_ca608af18bf9f01653c202703e17a3fb_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *locals_yaml$tokens$$$class__14_KeyToken_63 = NULL;
    struct Nuitka_FrameObject *frame_1951eccc5ba20645a944c8d8099f3144_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *locals_yaml$tokens$$$class__15_ValueToken_66 = NULL;
    struct Nuitka_FrameObject *frame_e12143cfeca017b4e147329fabb77809_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *locals_yaml$tokens$$$class__16_BlockEntryToken_69 = NULL;
    struct Nuitka_FrameObject *frame_34c6d57b5f3122104e5e8a993fe5e81f_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *locals_yaml$tokens$$$class__17_FlowEntryToken_72 = NULL;
    struct Nuitka_FrameObject *frame_7368e58bfaedb2adbd970b3ee928824f_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *locals_yaml$tokens$$$class__18_AliasToken_75 = NULL;
    struct Nuitka_FrameObject *frame_5e9dac947e3cbcad5a0db85881158b2b_19;
    NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *locals_yaml$tokens$$$class__19_AnchorToken_82 = NULL;
    struct Nuitka_FrameObject *frame_3eecb258ea2ee25aebd111632321017c_20;
    NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *locals_yaml$tokens$$$class__20_TagToken_89 = NULL;
    struct Nuitka_FrameObject *frame_75c5313bc6c0fdb748262941271571c8_21;
    NUITKA_MAY_BE_UNUSED char const *type_description_21 = NULL;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *locals_yaml$tokens$$$class__21_ScalarToken_96 = NULL;
    struct Nuitka_FrameObject *frame_69c7db615edb995aa2c7abe97685a71d_22;
    NUITKA_MAY_BE_UNUSED char const *type_description_22 = NULL;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_2);
    }
    frame_27b89517e9f1b8d043c2adcda034d256 = MAKE_MODULE_FRAME(codeobj_27b89517e9f1b8d043c2adcda034d256, module_yaml$tokens);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_27b89517e9f1b8d043c2adcda034d256);
    assert(Py_REFCNT(frame_27b89517e9f1b8d043c2adcda034d256) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_metaclass_value_1;
        PyObject *tmp_bases_value_1;
        tmp_metaclass_value_1 = LOOKUP_BUILTIN(mod_consts[20]);
        assert(tmp_metaclass_value_1 != NULL);
        tmp_bases_value_1 = mod_consts[21];
        tmp_assign_source_5 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_1, mod_consts[22]);
        tmp_condition_result_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        tmp_args_value_1 = mod_consts[23];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 2;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[24]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[8];
        tmp_getattr_default_1 = mod_consts[26];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 2;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_yaml$tokens$$$class__1_Token_2 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__1_Token_2, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[29];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__1_Token_2, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_3;
        }
        frame_4b5b6b4375e2dce7f8c922aa05d86282_2 = MAKE_CLASS_FRAME(codeobj_4b5b6b4375e2dce7f8c922aa05d86282, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4b5b6b4375e2dce7f8c922aa05d86282_2);
        assert(Py_REFCNT(frame_4b5b6b4375e2dce7f8c922aa05d86282_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__1_Token_2, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__1_Token_2, mod_consts[33], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b5b6b4375e2dce7f8c922aa05d86282_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b5b6b4375e2dce7f8c922aa05d86282_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b5b6b4375e2dce7f8c922aa05d86282_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b5b6b4375e2dce7f8c922aa05d86282_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_4b5b6b4375e2dce7f8c922aa05d86282_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[29];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_yaml$tokens$$$class__1_Token_2;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 2;
            tmp_assign_source_9 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 2;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_9;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_8 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_yaml$tokens$$$class__1_Token_2);
        locals_yaml$tokens$$$class__1_Token_2 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_yaml$tokens$$$class__1_Token_2);
        locals_yaml$tokens$$$class__1_Token_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 2;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_8);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_assign_source_10 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_2;
        PyObject *tmp_type_arg_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_5 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[35];
        tmp_type_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_type_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_2);
        Py_DECREF(tmp_type_arg_2);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_6 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[22]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_tuple_element_4 = mod_consts[36];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 17;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_8 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[24]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[8];
        tmp_getattr_default_2 = mod_consts[26];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_3 = tmp_class_creation_2__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[8]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 17;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_14;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_yaml$tokens$$$class__2_DirectiveToken_17 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__2_DirectiveToken_17, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__2_DirectiveToken_17, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_6;
        }
        frame_51ee08c7f3bcb7348c0566e5aaeb1376_3 = MAKE_CLASS_FRAME(codeobj_51ee08c7f3bcb7348c0566e5aaeb1376, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_51ee08c7f3bcb7348c0566e5aaeb1376_3);
        assert(Py_REFCNT(frame_51ee08c7f3bcb7348c0566e5aaeb1376_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__2_DirectiveToken_17, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__2_DirectiveToken_17, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_51ee08c7f3bcb7348c0566e5aaeb1376_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_51ee08c7f3bcb7348c0566e5aaeb1376_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_51ee08c7f3bcb7348c0566e5aaeb1376_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_51ee08c7f3bcb7348c0566e5aaeb1376_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_51ee08c7f3bcb7348c0566e5aaeb1376_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[36];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_yaml$tokens$$$class__2_DirectiveToken_17;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 17;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_15 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_yaml$tokens$$$class__2_DirectiveToken_17);
        locals_yaml$tokens$$$class__2_DirectiveToken_17 = NULL;
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

        Py_DECREF(locals_yaml$tokens$$$class__2_DirectiveToken_17);
        locals_yaml$tokens$$$class__2_DirectiveToken_17 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 17;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_3;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_10 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[35];
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, 0);
        if (tmp_type_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_4);
        Py_DECREF(tmp_type_arg_4);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_11 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[22]);
        tmp_condition_result_5 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_12 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[22]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_tuple_element_8 = mod_consts[40];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 25;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_13 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[24]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[8];
        tmp_getattr_default_3 = mod_consts[26];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_5 = tmp_class_creation_3__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[8]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 25;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_21;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_yaml$tokens$$$class__3_DocumentStartToken_25 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__3_DocumentStartToken_25, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__3_DocumentStartToken_25, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_9;
        }
        frame_1bf634653e15f5194183b01e4b70cebc_4 = MAKE_CLASS_FRAME(codeobj_1bf634653e15f5194183b01e4b70cebc, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1bf634653e15f5194183b01e4b70cebc_4);
        assert(Py_REFCNT(frame_1bf634653e15f5194183b01e4b70cebc_4) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__3_DocumentStartToken_25, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1bf634653e15f5194183b01e4b70cebc_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1bf634653e15f5194183b01e4b70cebc_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1bf634653e15f5194183b01e4b70cebc_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1bf634653e15f5194183b01e4b70cebc_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_1bf634653e15f5194183b01e4b70cebc_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[40];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_yaml$tokens$$$class__3_DocumentStartToken_25;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 25;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_22 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_yaml$tokens$$$class__3_DocumentStartToken_25);
        locals_yaml$tokens$$$class__3_DocumentStartToken_25 = NULL;
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

        Py_DECREF(locals_yaml$tokens$$$class__3_DocumentStartToken_25);
        locals_yaml$tokens$$$class__3_DocumentStartToken_25 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 25;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_22);
    }
    goto try_end_3;
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

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_value_4;
        PyObject *tmp_type_arg_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_15 = tmp_class_creation_4__bases;
        tmp_subscript_value_3 = mod_consts[35];
        tmp_type_arg_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_3, 0);
        if (tmp_type_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_6);
        Py_DECREF(tmp_type_arg_6);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_16 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[22]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_17 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[22]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        tmp_tuple_element_12 = mod_consts[42];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_12 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_18 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[24]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[8];
        tmp_getattr_default_4 = mod_consts[26];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_7 = tmp_class_creation_4__prepared;
            tmp_expression_value_19 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[8]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 28;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_28;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_yaml$tokens$$$class__4_DocumentEndToken_28 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__4_DocumentEndToken_28, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__4_DocumentEndToken_28, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_12;
        }
        frame_b4a8d91b841376f784af68e732ba5e1f_5 = MAKE_CLASS_FRAME(codeobj_b4a8d91b841376f784af68e732ba5e1f, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b4a8d91b841376f784af68e732ba5e1f_5);
        assert(Py_REFCNT(frame_b4a8d91b841376f784af68e732ba5e1f_5) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__4_DocumentEndToken_28, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b4a8d91b841376f784af68e732ba5e1f_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b4a8d91b841376f784af68e732ba5e1f_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b4a8d91b841376f784af68e732ba5e1f_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b4a8d91b841376f784af68e732ba5e1f_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_b4a8d91b841376f784af68e732ba5e1f_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_14 = mod_consts[42];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_yaml$tokens$$$class__4_DocumentEndToken_28;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 28;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_29 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_yaml$tokens$$$class__4_DocumentEndToken_28);
        locals_yaml$tokens$$$class__4_DocumentEndToken_28 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__4_DocumentEndToken_28);
        locals_yaml$tokens$$$class__4_DocumentEndToken_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 28;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_29);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_15;
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_value_5;
        PyObject *tmp_type_arg_8;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_20 = tmp_class_creation_5__bases;
        tmp_subscript_value_4 = mod_consts[35];
        tmp_type_arg_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_4, 0);
        if (tmp_type_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_8);
        Py_DECREF(tmp_type_arg_8);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_33 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_21 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[22]);
        tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_22 = tmp_class_creation_5__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[22]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        tmp_tuple_element_16 = mod_consts[44];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_16 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 31;
        tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_34;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_23 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_23, mod_consts[24]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[8];
        tmp_getattr_default_5 = mod_consts[26];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_9;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_9 = tmp_class_creation_5__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[8]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_35;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_yaml$tokens$$$class__5_StreamStartToken_31 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__5_StreamStartToken_31, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__5_StreamStartToken_31, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_15;
        }
        frame_7caea93d3e18d72747290f7263561aa5_6 = MAKE_CLASS_FRAME(codeobj_7caea93d3e18d72747290f7263561aa5, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7caea93d3e18d72747290f7263561aa5_6);
        assert(Py_REFCNT(frame_7caea93d3e18d72747290f7263561aa5_6) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[45];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__5_StreamStartToken_31, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[46];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__4___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__5_StreamStartToken_31, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7caea93d3e18d72747290f7263561aa5_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7caea93d3e18d72747290f7263561aa5_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7caea93d3e18d72747290f7263561aa5_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7caea93d3e18d72747290f7263561aa5_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_7caea93d3e18d72747290f7263561aa5_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_18 = mod_consts[44];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_yaml$tokens$$$class__5_StreamStartToken_31;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 31;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_36 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_yaml$tokens$$$class__5_StreamStartToken_31);
        locals_yaml$tokens$$$class__5_StreamStartToken_31 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__5_StreamStartToken_31);
        locals_yaml$tokens$$$class__5_StreamStartToken_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 31;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_36);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        tmp_assign_source_38 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_19);
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_metaclass_value_6;
        PyObject *tmp_type_arg_10;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_25 = tmp_class_creation_6__bases;
        tmp_subscript_value_5 = mod_consts[35];
        tmp_type_arg_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_5, 0);
        if (tmp_type_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_10);
        Py_DECREF(tmp_type_arg_10);
        if (tmp_metaclass_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_40 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_26 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_26, mod_consts[22]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_27 = tmp_class_creation_6__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[22]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        tmp_tuple_element_20 = mod_consts[48];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_20 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 39;
        tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_41;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_28 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_28, mod_consts[24]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[8];
        tmp_getattr_default_6 = mod_consts[26];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_29;
            PyObject *tmp_type_arg_11;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_11 = tmp_class_creation_6__prepared;
            tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_expression_value_29 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[8]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 39;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_42;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_yaml$tokens$$$class__6_StreamEndToken_39 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__6_StreamEndToken_39, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__6_StreamEndToken_39, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_18;
        }
        frame_461f53454e60d4f997c4bd0f96eafd1e_7 = MAKE_CLASS_FRAME(codeobj_461f53454e60d4f997c4bd0f96eafd1e, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_461f53454e60d4f997c4bd0f96eafd1e_7);
        assert(Py_REFCNT(frame_461f53454e60d4f997c4bd0f96eafd1e_7) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__6_StreamEndToken_39, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_461f53454e60d4f997c4bd0f96eafd1e_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_461f53454e60d4f997c4bd0f96eafd1e_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_461f53454e60d4f997c4bd0f96eafd1e_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_461f53454e60d4f997c4bd0f96eafd1e_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_461f53454e60d4f997c4bd0f96eafd1e_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_12 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_22 = mod_consts[48];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_22 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_yaml$tokens$$$class__6_StreamEndToken_39;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 39;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_43 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_yaml$tokens$$$class__6_StreamEndToken_39);
        locals_yaml$tokens$$$class__6_StreamEndToken_39 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__6_StreamEndToken_39);
        locals_yaml$tokens$$$class__6_StreamEndToken_39 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 39;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_43);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_23;
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        tmp_assign_source_45 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_23);
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_value_7;
        PyObject *tmp_type_arg_12;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_30 = tmp_class_creation_7__bases;
        tmp_subscript_value_6 = mod_consts[35];
        tmp_type_arg_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_30, tmp_subscript_value_6, 0);
        if (tmp_type_arg_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_12);
        Py_DECREF(tmp_type_arg_12);
        if (tmp_metaclass_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_31 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_31, mod_consts[22]);
        tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_32 = tmp_class_creation_7__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[22]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        tmp_tuple_element_24 = mod_consts[50];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_24 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_24);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 42;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_48;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_33 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[24]);
        tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[8];
        tmp_getattr_default_7 = mod_consts[26];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_34;
            PyObject *tmp_type_arg_13;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_13 = tmp_class_creation_7__prepared;
            tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_expression_value_34 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[8]);
            Py_DECREF(tmp_expression_value_34);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 42;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_49;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_21;
        }
        frame_b7b7f42dfb17cf64c02f4954f0cadefe_8 = MAKE_CLASS_FRAME(codeobj_b7b7f42dfb17cf64c02f4954f0cadefe, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b7b7f42dfb17cf64c02f4954f0cadefe_8);
        assert(Py_REFCNT(frame_b7b7f42dfb17cf64c02f4954f0cadefe_8) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b7b7f42dfb17cf64c02f4954f0cadefe_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b7b7f42dfb17cf64c02f4954f0cadefe_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b7b7f42dfb17cf64c02f4954f0cadefe_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b7b7f42dfb17cf64c02f4954f0cadefe_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_b7b7f42dfb17cf64c02f4954f0cadefe_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_14 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_26 = mod_consts[50];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_26 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 42;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_50 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42);
        locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42);
        locals_yaml$tokens$$$class__7_BlockSequenceStartToken_42 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 42;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_50);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        tmp_assign_source_52 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_8;
        PyObject *tmp_type_arg_14;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_35 = tmp_class_creation_8__bases;
        tmp_subscript_value_7 = mod_consts[35];
        tmp_type_arg_14 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_35, tmp_subscript_value_7, 0);
        if (tmp_type_arg_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_14);
        Py_DECREF(tmp_type_arg_14);
        if (tmp_metaclass_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_36 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_36, mod_consts[22]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_37 = tmp_class_creation_8__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[22]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        tmp_tuple_element_28 = mod_consts[52];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_28 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 45;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_38 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_38, mod_consts[24]);
        tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[8];
        tmp_getattr_default_8 = mod_consts[26];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_type_arg_15;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_15 = tmp_class_creation_8__prepared;
            tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_15);
            assert(!(tmp_expression_value_39 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[8]);
            Py_DECREF(tmp_expression_value_39);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 45;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_56;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_yaml$tokens$$$class__8_BlockMappingStartToken_45 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__8_BlockMappingStartToken_45, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__8_BlockMappingStartToken_45, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_24;
        }
        frame_c9040a904052af543b2360aa66418046_9 = MAKE_CLASS_FRAME(codeobj_c9040a904052af543b2360aa66418046, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c9040a904052af543b2360aa66418046_9);
        assert(Py_REFCNT(frame_c9040a904052af543b2360aa66418046_9) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__8_BlockMappingStartToken_45, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c9040a904052af543b2360aa66418046_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c9040a904052af543b2360aa66418046_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c9040a904052af543b2360aa66418046_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c9040a904052af543b2360aa66418046_9,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_c9040a904052af543b2360aa66418046_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_16 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_30 = mod_consts[52];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_30 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_yaml$tokens$$$class__8_BlockMappingStartToken_45;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 45;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_57 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_yaml$tokens$$$class__8_BlockMappingStartToken_45);
        locals_yaml$tokens$$$class__8_BlockMappingStartToken_45 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__8_BlockMappingStartToken_45);
        locals_yaml$tokens$$$class__8_BlockMappingStartToken_45 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 45;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_57);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_31;
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_31);
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_metaclass_value_9;
        PyObject *tmp_type_arg_16;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_40 = tmp_class_creation_9__bases;
        tmp_subscript_value_8 = mod_consts[35];
        tmp_type_arg_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_40, tmp_subscript_value_8, 0);
        if (tmp_type_arg_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_16);
        Py_DECREF(tmp_type_arg_16);
        if (tmp_metaclass_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_61 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_41 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_41, mod_consts[22]);
        tmp_condition_result_17 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_42 = tmp_class_creation_9__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[22]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        tmp_tuple_element_32 = mod_consts[54];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_32 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_32);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 48;
        tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_43 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_43, mod_consts[24]);
        tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[8];
        tmp_getattr_default_9 = mod_consts[26];
        tmp_tuple_element_33 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_type_arg_17;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_17 = tmp_class_creation_9__prepared;
            tmp_expression_value_44 = BUILTIN_TYPE1(tmp_type_arg_17);
            assert(!(tmp_expression_value_44 == NULL));
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[8]);
            Py_DECREF(tmp_expression_value_44);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 48;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_63;
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_yaml$tokens$$$class__9_BlockEndToken_48 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__9_BlockEndToken_48, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__9_BlockEndToken_48, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_27;
        }
        frame_163fa865ca126dcfb392982c3abb4728_10 = MAKE_CLASS_FRAME(codeobj_163fa865ca126dcfb392982c3abb4728, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_163fa865ca126dcfb392982c3abb4728_10);
        assert(Py_REFCNT(frame_163fa865ca126dcfb392982c3abb4728_10) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__9_BlockEndToken_48, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_163fa865ca126dcfb392982c3abb4728_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_163fa865ca126dcfb392982c3abb4728_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_163fa865ca126dcfb392982c3abb4728_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_163fa865ca126dcfb392982c3abb4728_10,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_163fa865ca126dcfb392982c3abb4728_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_27;
        skip_nested_handling_9:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_18 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_34 = mod_consts[54];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_34 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = locals_yaml$tokens$$$class__9_BlockEndToken_48;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 48;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_64 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_yaml$tokens$$$class__9_BlockEndToken_48);
        locals_yaml$tokens$$$class__9_BlockEndToken_48 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__9_BlockEndToken_48);
        locals_yaml$tokens$$$class__9_BlockEndToken_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 48;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_64);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_tuple_element_35;
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_35 == NULL)) {
            tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        tmp_assign_source_66 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_66, 0, tmp_tuple_element_35);
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_metaclass_value_10;
        PyObject *tmp_type_arg_18;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_45 = tmp_class_creation_10__bases;
        tmp_subscript_value_9 = mod_consts[35];
        tmp_type_arg_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_9, 0);
        if (tmp_type_arg_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_18);
        Py_DECREF(tmp_type_arg_18);
        if (tmp_metaclass_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_68 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_46 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[22]);
        tmp_condition_result_19 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_47 = tmp_class_creation_10__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[22]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        tmp_tuple_element_36 = mod_consts[56];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_36 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_36);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 51;
        tmp_assign_source_69 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_48 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_48, mod_consts[24]);
        tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[8];
        tmp_getattr_default_10 = mod_consts[26];
        tmp_tuple_element_37 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_19;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_37);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_19 = tmp_class_creation_10__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_19);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[8]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 51;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_70;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_71;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_30;
        }
        frame_b4f78064e9c9de0b84cb70f8b1b27b90_11 = MAKE_CLASS_FRAME(codeobj_b4f78064e9c9de0b84cb70f8b1b27b90, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b4f78064e9c9de0b84cb70f8b1b27b90_11);
        assert(Py_REFCNT(frame_b4f78064e9c9de0b84cb70f8b1b27b90_11) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b4f78064e9c9de0b84cb70f8b1b27b90_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b4f78064e9c9de0b84cb70f8b1b27b90_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b4f78064e9c9de0b84cb70f8b1b27b90_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b4f78064e9c9de0b84cb70f8b1b27b90_11,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_b4f78064e9c9de0b84cb70f8b1b27b90_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_30;
        skip_nested_handling_10:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_20 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_38 = mod_consts[56];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_38 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 51;
            tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_71 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_71);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51);
        locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51);
        locals_yaml$tokens$$$class__10_FlowSequenceStartToken_51 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 51;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_71);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_tuple_element_39;
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_39 == NULL)) {
            tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        tmp_assign_source_73 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_73, 0, tmp_tuple_element_39);
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_metaclass_value_11;
        PyObject *tmp_type_arg_20;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_50 = tmp_class_creation_11__bases;
        tmp_subscript_value_10 = mod_consts[35];
        tmp_type_arg_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_50, tmp_subscript_value_10, 0);
        if (tmp_type_arg_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_20);
        Py_DECREF(tmp_type_arg_20);
        if (tmp_metaclass_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_75 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_75;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_51 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_51, mod_consts[22]);
        tmp_condition_result_21 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_52 = tmp_class_creation_11__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[22]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        tmp_tuple_element_40 = mod_consts[58];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_40 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 54;
        tmp_assign_source_76 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_76;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_53;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_53 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_53, mod_consts[24]);
        tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        tmp_condition_result_22 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[8];
        tmp_getattr_default_11 = mod_consts[26];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_21;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_21 = tmp_class_creation_11__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_21);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[8]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 54;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_77;
    }
    branch_end_21:;
    {
        PyObject *tmp_assign_source_78;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_yaml$tokens$$$class__11_FlowMappingStartToken_54 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__11_FlowMappingStartToken_54, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__11_FlowMappingStartToken_54, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_33;
        }
        frame_ad77ec5482514b752524926e35b67957_12 = MAKE_CLASS_FRAME(codeobj_ad77ec5482514b752524926e35b67957, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ad77ec5482514b752524926e35b67957_12);
        assert(Py_REFCNT(frame_ad77ec5482514b752524926e35b67957_12) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__11_FlowMappingStartToken_54, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad77ec5482514b752524926e35b67957_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad77ec5482514b752524926e35b67957_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad77ec5482514b752524926e35b67957_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad77ec5482514b752524926e35b67957_12,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_ad77ec5482514b752524926e35b67957_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_33;
        skip_nested_handling_11:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_22 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_42 = mod_consts[58];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_42 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_yaml$tokens$$$class__11_FlowMappingStartToken_54;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 54;
            tmp_assign_source_79 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_79;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_78 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_78);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_yaml$tokens$$$class__11_FlowMappingStartToken_54);
        locals_yaml$tokens$$$class__11_FlowMappingStartToken_54 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__11_FlowMappingStartToken_54);
        locals_yaml$tokens$$$class__11_FlowMappingStartToken_54 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 54;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_78);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_tuple_element_43;
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_43 == NULL)) {
            tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        tmp_assign_source_80 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_80, 0, tmp_tuple_element_43);
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_metaclass_value_12;
        PyObject *tmp_type_arg_22;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_55 = tmp_class_creation_12__bases;
        tmp_subscript_value_11 = mod_consts[35];
        tmp_type_arg_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_55, tmp_subscript_value_11, 0);
        if (tmp_type_arg_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_22);
        Py_DECREF(tmp_type_arg_22);
        if (tmp_metaclass_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_82 = SELECT_METACLASS(tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_82;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_56 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_56, mod_consts[22]);
        tmp_condition_result_23 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_57 = tmp_class_creation_12__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[22]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        tmp_tuple_element_44 = mod_consts[60];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_44 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_44);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 57;
        tmp_assign_source_83 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_83;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_58 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_58, mod_consts[24]);
        tmp_operand_value_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[8];
        tmp_getattr_default_12 = mod_consts[26];
        tmp_tuple_element_45 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_59;
            PyObject *tmp_type_arg_23;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_23 = tmp_class_creation_12__prepared;
            tmp_expression_value_59 = BUILTIN_TYPE1(tmp_type_arg_23);
            assert(!(tmp_expression_value_59 == NULL));
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[8]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 57;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_24:;
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_84;
    }
    branch_end_23:;
    {
        PyObject *tmp_assign_source_85;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[60];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_36;
        }
        frame_9da4c70ceff101d7aada1a326cdf245c_13 = MAKE_CLASS_FRAME(codeobj_9da4c70ceff101d7aada1a326cdf245c, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9da4c70ceff101d7aada1a326cdf245c_13);
        assert(Py_REFCNT(frame_9da4c70ceff101d7aada1a326cdf245c_13) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_13;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9da4c70ceff101d7aada1a326cdf245c_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9da4c70ceff101d7aada1a326cdf245c_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9da4c70ceff101d7aada1a326cdf245c_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9da4c70ceff101d7aada1a326cdf245c_13,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_9da4c70ceff101d7aada1a326cdf245c_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_36;
        skip_nested_handling_12:;
        {
            PyObject *tmp_assign_source_86;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_24 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_46 = mod_consts[60];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_46 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 57;
            tmp_assign_source_86 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto try_except_handler_36;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_86;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_85 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_85);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57);
        locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57);
        locals_yaml$tokens$$$class__12_FlowSequenceEndToken_57 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 57;
        goto try_except_handler_34;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_85);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_47;
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        tmp_assign_source_87 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_metaclass_value_13;
        PyObject *tmp_type_arg_24;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_60 = tmp_class_creation_13__bases;
        tmp_subscript_value_12 = mod_consts[35];
        tmp_type_arg_24 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_60, tmp_subscript_value_12, 0);
        if (tmp_type_arg_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_24);
        Py_DECREF(tmp_type_arg_24);
        if (tmp_metaclass_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_89 = SELECT_METACLASS(tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_89;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_expression_value_61;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_61 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_61, mod_consts[22]);
        tmp_condition_result_25 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_62 = tmp_class_creation_13__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[22]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        tmp_tuple_element_48 = mod_consts[62];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_48 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 60;
        tmp_assign_source_90 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_90;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_63 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_63, mod_consts[24]);
        tmp_operand_value_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        tmp_condition_result_26 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[8];
        tmp_getattr_default_13 = mod_consts[26];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_type_arg_25;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_25 = tmp_class_creation_13__prepared;
            tmp_expression_value_64 = BUILTIN_TYPE1(tmp_type_arg_25);
            assert(!(tmp_expression_value_64 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[8]);
            Py_DECREF(tmp_expression_value_64);
            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_37;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 60;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_37;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_91;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_92;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_yaml$tokens$$$class__13_FlowMappingEndToken_60 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__13_FlowMappingEndToken_60, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__13_FlowMappingEndToken_60, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_39;
        }
        frame_ca608af18bf9f01653c202703e17a3fb_14 = MAKE_CLASS_FRAME(codeobj_ca608af18bf9f01653c202703e17a3fb, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ca608af18bf9f01653c202703e17a3fb_14);
        assert(Py_REFCNT(frame_ca608af18bf9f01653c202703e17a3fb_14) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__13_FlowMappingEndToken_60, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ca608af18bf9f01653c202703e17a3fb_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ca608af18bf9f01653c202703e17a3fb_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ca608af18bf9f01653c202703e17a3fb_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ca608af18bf9f01653c202703e17a3fb_14,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_ca608af18bf9f01653c202703e17a3fb_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_39;
        skip_nested_handling_13:;
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_26 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_50 = mod_consts[62];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_50 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_yaml$tokens$$$class__13_FlowMappingEndToken_60;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 60;
            tmp_assign_source_93 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto try_except_handler_39;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_93;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_92 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_92);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_yaml$tokens$$$class__13_FlowMappingEndToken_60);
        locals_yaml$tokens$$$class__13_FlowMappingEndToken_60 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__13_FlowMappingEndToken_60);
        locals_yaml$tokens$$$class__13_FlowMappingEndToken_60 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 60;
        goto try_except_handler_37;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_92);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_tuple_element_51;
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_51 == NULL)) {
            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        tmp_assign_source_94 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_94, 0, tmp_tuple_element_51);
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_metaclass_value_14;
        PyObject *tmp_type_arg_26;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_65 = tmp_class_creation_14__bases;
        tmp_subscript_value_13 = mod_consts[35];
        tmp_type_arg_26 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_65, tmp_subscript_value_13, 0);
        if (tmp_type_arg_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_26);
        Py_DECREF(tmp_type_arg_26);
        if (tmp_metaclass_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_96 = SELECT_METACLASS(tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_96;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_66 = tmp_class_creation_14__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_66, mod_consts[22]);
        tmp_condition_result_27 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_67 = tmp_class_creation_14__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[22]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        tmp_tuple_element_52 = mod_consts[64];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_52 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 63;
        tmp_assign_source_97 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_68 = tmp_class_creation_14__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_68, mod_consts[24]);
        tmp_operand_value_14 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_getattr_target_14;
        PyObject *tmp_getattr_attr_14;
        PyObject *tmp_getattr_default_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_getattr_target_14 = tmp_class_creation_14__metaclass;
        tmp_getattr_attr_14 = mod_consts[8];
        tmp_getattr_default_14 = mod_consts[26];
        tmp_tuple_element_53 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
        if (tmp_tuple_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_69;
            PyObject *tmp_type_arg_27;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_27 = tmp_class_creation_14__prepared;
            tmp_expression_value_69 = BUILTIN_TYPE1(tmp_type_arg_27);
            assert(!(tmp_expression_value_69 == NULL));
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[8]);
            Py_DECREF(tmp_expression_value_69);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_40;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 63;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_40;
    }
    branch_no_28:;
    goto branch_end_27;
    branch_no_27:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_98;
    }
    branch_end_27:;
    {
        PyObject *tmp_assign_source_99;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_yaml$tokens$$$class__14_KeyToken_63 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__14_KeyToken_63, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_42;
        }
        tmp_dictset_value = mod_consts[64];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__14_KeyToken_63, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_42;
        }
        frame_1951eccc5ba20645a944c8d8099f3144_15 = MAKE_CLASS_FRAME(codeobj_1951eccc5ba20645a944c8d8099f3144, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1951eccc5ba20645a944c8d8099f3144_15);
        assert(Py_REFCNT(frame_1951eccc5ba20645a944c8d8099f3144_15) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__14_KeyToken_63, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "o";
            goto frame_exception_exit_15;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1951eccc5ba20645a944c8d8099f3144_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1951eccc5ba20645a944c8d8099f3144_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1951eccc5ba20645a944c8d8099f3144_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1951eccc5ba20645a944c8d8099f3144_15,
            type_description_2,
            outline_13_var___class__
        );



        assertFrameObject(frame_1951eccc5ba20645a944c8d8099f3144_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_42;
        skip_nested_handling_14:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_28 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_54 = mod_consts[64];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_54 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = locals_yaml$tokens$$$class__14_KeyToken_63;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 63;
            tmp_assign_source_100 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto try_except_handler_42;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_100;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_99 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_99);
        goto try_return_handler_42;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        Py_DECREF(locals_yaml$tokens$$$class__14_KeyToken_63);
        locals_yaml$tokens$$$class__14_KeyToken_63 = NULL;
        goto try_return_handler_41;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__14_KeyToken_63);
        locals_yaml$tokens$$$class__14_KeyToken_63 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto try_except_handler_41;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 63;
        goto try_except_handler_40;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_99);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_tuple_element_55;
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_55 == NULL)) {
            tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        tmp_assign_source_101 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_101, 0, tmp_tuple_element_55);
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_102;
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_metaclass_value_15;
        PyObject *tmp_type_arg_28;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_70 = tmp_class_creation_15__bases;
        tmp_subscript_value_14 = mod_consts[35];
        tmp_type_arg_28 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_70, tmp_subscript_value_14, 0);
        if (tmp_type_arg_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_28);
        Py_DECREF(tmp_type_arg_28);
        if (tmp_metaclass_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_103 = SELECT_METACLASS(tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_103;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_71 = tmp_class_creation_15__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_71, mod_consts[22]);
        tmp_condition_result_29 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_72 = tmp_class_creation_15__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[22]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        tmp_tuple_element_56 = mod_consts[66];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_56 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_56);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 66;
        tmp_assign_source_104 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_104;
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_73;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_73 = tmp_class_creation_15__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_73, mod_consts[24]);
        tmp_operand_value_15 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        tmp_condition_result_30 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_getattr_target_15;
        PyObject *tmp_getattr_attr_15;
        PyObject *tmp_getattr_default_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_getattr_target_15 = tmp_class_creation_15__metaclass;
        tmp_getattr_attr_15 = mod_consts[8];
        tmp_getattr_default_15 = mod_consts[26];
        tmp_tuple_element_57 = BUILTIN_GETATTR(tmp_getattr_target_15, tmp_getattr_attr_15, tmp_getattr_default_15);
        if (tmp_tuple_element_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_74;
            PyObject *tmp_type_arg_29;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_29 = tmp_class_creation_15__prepared;
            tmp_expression_value_74 = BUILTIN_TYPE1(tmp_type_arg_29);
            assert(!(tmp_expression_value_74 == NULL));
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[8]);
            Py_DECREF(tmp_expression_value_74);
            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_43;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 66;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_43;
    }
    branch_no_30:;
    goto branch_end_29;
    branch_no_29:;
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_105;
    }
    branch_end_29:;
    {
        PyObject *tmp_assign_source_106;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_yaml$tokens$$$class__15_ValueToken_66 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__15_ValueToken_66, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_45;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__15_ValueToken_66, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_45;
        }
        frame_e12143cfeca017b4e147329fabb77809_16 = MAKE_CLASS_FRAME(codeobj_e12143cfeca017b4e147329fabb77809, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e12143cfeca017b4e147329fabb77809_16);
        assert(Py_REFCNT(frame_e12143cfeca017b4e147329fabb77809_16) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__15_ValueToken_66, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_15;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e12143cfeca017b4e147329fabb77809_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e12143cfeca017b4e147329fabb77809_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e12143cfeca017b4e147329fabb77809_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e12143cfeca017b4e147329fabb77809_16,
            type_description_2,
            outline_14_var___class__
        );



        assertFrameObject(frame_e12143cfeca017b4e147329fabb77809_16);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_45;
        skip_nested_handling_15:;
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_30 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_58 = mod_consts[66];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_58 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = locals_yaml$tokens$$$class__15_ValueToken_66;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 66;
            tmp_assign_source_107 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto try_except_handler_45;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_107;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_106 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_106);
        goto try_return_handler_45;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        Py_DECREF(locals_yaml$tokens$$$class__15_ValueToken_66);
        locals_yaml$tokens$$$class__15_ValueToken_66 = NULL;
        goto try_return_handler_44;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__15_ValueToken_66);
        locals_yaml$tokens$$$class__15_ValueToken_66 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto try_except_handler_44;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 66;
        goto try_except_handler_43;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_106);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_tuple_element_59;
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_59 == NULL)) {
            tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        tmp_assign_source_108 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_108, 0, tmp_tuple_element_59);
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_metaclass_value_16;
        PyObject *tmp_type_arg_30;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_75 = tmp_class_creation_16__bases;
        tmp_subscript_value_15 = mod_consts[35];
        tmp_type_arg_30 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_75, tmp_subscript_value_15, 0);
        if (tmp_type_arg_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_30);
        Py_DECREF(tmp_type_arg_30);
        if (tmp_metaclass_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_110 = SELECT_METACLASS(tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_110;
    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_76 = tmp_class_creation_16__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_76, mod_consts[22]);
        tmp_condition_result_31 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_77 = tmp_class_creation_16__metaclass;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[22]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        tmp_tuple_element_60 = mod_consts[68];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_60);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_60 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_60);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 69;
        tmp_assign_source_111 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_78 = tmp_class_creation_16__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_78, mod_consts[24]);
        tmp_operand_value_16 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        tmp_condition_result_32 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_getattr_target_16;
        PyObject *tmp_getattr_attr_16;
        PyObject *tmp_getattr_default_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_getattr_target_16 = tmp_class_creation_16__metaclass;
        tmp_getattr_attr_16 = mod_consts[8];
        tmp_getattr_default_16 = mod_consts[26];
        tmp_tuple_element_61 = BUILTIN_GETATTR(tmp_getattr_target_16, tmp_getattr_attr_16, tmp_getattr_default_16);
        if (tmp_tuple_element_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_79;
            PyObject *tmp_type_arg_31;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_31 = tmp_class_creation_16__prepared;
            tmp_expression_value_79 = BUILTIN_TYPE1(tmp_type_arg_31);
            assert(!(tmp_expression_value_79 == NULL));
            tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[8]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_46;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_46;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 69;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_46;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_112;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_yaml$tokens$$$class__16_BlockEntryToken_69 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__16_BlockEntryToken_69, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_48;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__16_BlockEntryToken_69, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_48;
        }
        frame_34c6d57b5f3122104e5e8a993fe5e81f_17 = MAKE_CLASS_FRAME(codeobj_34c6d57b5f3122104e5e8a993fe5e81f, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_34c6d57b5f3122104e5e8a993fe5e81f_17);
        assert(Py_REFCNT(frame_34c6d57b5f3122104e5e8a993fe5e81f_17) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__16_BlockEntryToken_69, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_16;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_34c6d57b5f3122104e5e8a993fe5e81f_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_34c6d57b5f3122104e5e8a993fe5e81f_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_34c6d57b5f3122104e5e8a993fe5e81f_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_34c6d57b5f3122104e5e8a993fe5e81f_17,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_34c6d57b5f3122104e5e8a993fe5e81f_17);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_48;
        skip_nested_handling_16:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_32 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_62 = mod_consts[68];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_62 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = locals_yaml$tokens$$$class__16_BlockEntryToken_69;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 69;
            tmp_assign_source_114 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_48;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_114;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_113 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_113);
        goto try_return_handler_48;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF(locals_yaml$tokens$$$class__16_BlockEntryToken_69);
        locals_yaml$tokens$$$class__16_BlockEntryToken_69 = NULL;
        goto try_return_handler_47;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__16_BlockEntryToken_69);
        locals_yaml$tokens$$$class__16_BlockEntryToken_69 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto try_except_handler_47;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 69;
        goto try_except_handler_46;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_113);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_tuple_element_63;
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_63 == NULL)) {
            tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        tmp_assign_source_115 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_63);
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_metaclass_value_17;
        PyObject *tmp_type_arg_32;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_80 = tmp_class_creation_17__bases;
        tmp_subscript_value_16 = mod_consts[35];
        tmp_type_arg_32 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_80, tmp_subscript_value_16, 0);
        if (tmp_type_arg_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_32);
        Py_DECREF(tmp_type_arg_32);
        if (tmp_metaclass_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_117 = SELECT_METACLASS(tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_117;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_81 = tmp_class_creation_17__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_81, mod_consts[22]);
        tmp_condition_result_33 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_82 = tmp_class_creation_17__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[22]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        tmp_tuple_element_64 = mod_consts[70];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_64);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_64 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_64);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 72;
        tmp_assign_source_118 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_118;
    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_83;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_83 = tmp_class_creation_17__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_83, mod_consts[24]);
        tmp_operand_value_17 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        tmp_condition_result_34 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_getattr_target_17;
        PyObject *tmp_getattr_attr_17;
        PyObject *tmp_getattr_default_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_getattr_target_17 = tmp_class_creation_17__metaclass;
        tmp_getattr_attr_17 = mod_consts[8];
        tmp_getattr_default_17 = mod_consts[26];
        tmp_tuple_element_65 = BUILTIN_GETATTR(tmp_getattr_target_17, tmp_getattr_attr_17, tmp_getattr_default_17);
        if (tmp_tuple_element_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_type_arg_33;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_33 = tmp_class_creation_17__prepared;
            tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_33);
            assert(!(tmp_expression_value_84 == NULL));
            tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[8]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_tuple_element_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_49;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_49;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_49;
    }
    branch_no_34:;
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_119;
    }
    branch_end_33:;
    {
        PyObject *tmp_assign_source_120;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_yaml$tokens$$$class__17_FlowEntryToken_72 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__17_FlowEntryToken_72, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_51;
        }
        tmp_dictset_value = mod_consts[70];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__17_FlowEntryToken_72, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_51;
        }
        frame_7368e58bfaedb2adbd970b3ee928824f_18 = MAKE_CLASS_FRAME(codeobj_7368e58bfaedb2adbd970b3ee928824f, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7368e58bfaedb2adbd970b3ee928824f_18);
        assert(Py_REFCNT(frame_7368e58bfaedb2adbd970b3ee928824f_18) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__17_FlowEntryToken_72, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_2 = "o";
            goto frame_exception_exit_18;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_17;
        frame_exception_exit_18:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7368e58bfaedb2adbd970b3ee928824f_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7368e58bfaedb2adbd970b3ee928824f_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7368e58bfaedb2adbd970b3ee928824f_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7368e58bfaedb2adbd970b3ee928824f_18,
            type_description_2,
            outline_16_var___class__
        );



        assertFrameObject(frame_7368e58bfaedb2adbd970b3ee928824f_18);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_17;
        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_17:;

        goto try_except_handler_51;
        skip_nested_handling_17:;
        {
            PyObject *tmp_assign_source_121;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_34 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_66 = mod_consts[70];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_66 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_66);
            tmp_tuple_element_66 = locals_yaml$tokens$$$class__17_FlowEntryToken_72;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 72;
            tmp_assign_source_121 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_51;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_121;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_120 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_120);
        goto try_return_handler_51;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        Py_DECREF(locals_yaml$tokens$$$class__17_FlowEntryToken_72);
        locals_yaml$tokens$$$class__17_FlowEntryToken_72 = NULL;
        goto try_return_handler_50;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__17_FlowEntryToken_72);
        locals_yaml$tokens$$$class__17_FlowEntryToken_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto try_except_handler_50;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 72;
        goto try_except_handler_49;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_120);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_tuple_element_67;
        tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_67 == NULL)) {
            tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        tmp_assign_source_122 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_122, 0, tmp_tuple_element_67);
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_metaclass_value_18;
        PyObject *tmp_type_arg_34;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_85 = tmp_class_creation_18__bases;
        tmp_subscript_value_17 = mod_consts[35];
        tmp_type_arg_34 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_85, tmp_subscript_value_17, 0);
        if (tmp_type_arg_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_34);
        Py_DECREF(tmp_type_arg_34);
        if (tmp_metaclass_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_124 = SELECT_METACLASS(tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_124;
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_86 = tmp_class_creation_18__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_86, mod_consts[22]);
        tmp_condition_result_35 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_87 = tmp_class_creation_18__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[22]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        tmp_tuple_element_68 = mod_consts[72];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_68);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_68 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_68);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 75;
        tmp_assign_source_125 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_125;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_88 = tmp_class_creation_18__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_88, mod_consts[24]);
        tmp_operand_value_18 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        tmp_condition_result_36 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_getattr_target_18;
        PyObject *tmp_getattr_attr_18;
        PyObject *tmp_getattr_default_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_getattr_target_18 = tmp_class_creation_18__metaclass;
        tmp_getattr_attr_18 = mod_consts[8];
        tmp_getattr_default_18 = mod_consts[26];
        tmp_tuple_element_69 = BUILTIN_GETATTR(tmp_getattr_target_18, tmp_getattr_attr_18, tmp_getattr_default_18);
        if (tmp_tuple_element_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_89;
            PyObject *tmp_type_arg_35;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_35 = tmp_class_creation_18__prepared;
            tmp_expression_value_89 = BUILTIN_TYPE1(tmp_type_arg_35);
            assert(!(tmp_expression_value_89 == NULL));
            tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[8]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_tuple_element_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_69);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_52;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_52;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 75;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_52;
    }
    branch_no_36:;
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_126;
    }
    branch_end_35:;
    {
        PyObject *tmp_assign_source_127;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_yaml$tokens$$$class__18_AliasToken_75 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__18_AliasToken_75, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_54;
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__18_AliasToken_75, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_54;
        }
        frame_5e9dac947e3cbcad5a0db85881158b2b_19 = MAKE_CLASS_FRAME(codeobj_5e9dac947e3cbcad5a0db85881158b2b, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5e9dac947e3cbcad5a0db85881158b2b_19);
        assert(Py_REFCNT(frame_5e9dac947e3cbcad5a0db85881158b2b_19) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__18_AliasToken_75, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }


        tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__5___init__();

        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__18_AliasToken_75, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_18;
        frame_exception_exit_19:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5e9dac947e3cbcad5a0db85881158b2b_19, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5e9dac947e3cbcad5a0db85881158b2b_19->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5e9dac947e3cbcad5a0db85881158b2b_19, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5e9dac947e3cbcad5a0db85881158b2b_19,
            type_description_2,
            outline_17_var___class__
        );



        assertFrameObject(frame_5e9dac947e3cbcad5a0db85881158b2b_19);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_18;
        frame_no_exception_18:;
        goto skip_nested_handling_18;
        nested_frame_exit_18:;

        goto try_except_handler_54;
        skip_nested_handling_18:;
        {
            PyObject *tmp_assign_source_128;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_36 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_70 = mod_consts[72];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_70 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_70);
            tmp_tuple_element_70 = locals_yaml$tokens$$$class__18_AliasToken_75;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 75;
            tmp_assign_source_128 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto try_except_handler_54;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_128;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_127 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_127);
        goto try_return_handler_54;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        Py_DECREF(locals_yaml$tokens$$$class__18_AliasToken_75);
        locals_yaml$tokens$$$class__18_AliasToken_75 = NULL;
        goto try_return_handler_53;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__18_AliasToken_75);
        locals_yaml$tokens$$$class__18_AliasToken_75 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto try_except_handler_53;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 75;
        goto try_except_handler_52;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_127);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_tuple_element_71;
        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_71 == NULL)) {
            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        tmp_assign_source_129 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_129, 0, tmp_tuple_element_71);
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_metaclass_value_19;
        PyObject *tmp_type_arg_36;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_90 = tmp_class_creation_19__bases;
        tmp_subscript_value_18 = mod_consts[35];
        tmp_type_arg_36 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_90, tmp_subscript_value_18, 0);
        if (tmp_type_arg_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_36);
        Py_DECREF(tmp_type_arg_36);
        if (tmp_metaclass_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_131 = SELECT_METACLASS(tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_131;
    }
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_expression_value_91;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_91 = tmp_class_creation_19__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_91, mod_consts[22]);
        tmp_condition_result_37 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_92 = tmp_class_creation_19__metaclass;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[22]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        tmp_tuple_element_72 = mod_consts[75];
        tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_72 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 82;
        tmp_assign_source_132 = CALL_FUNCTION(tmp_called_value_37, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_132;
    }
    {
        bool tmp_condition_result_38;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_93;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_93 = tmp_class_creation_19__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_93, mod_consts[24]);
        tmp_operand_value_19 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        tmp_condition_result_38 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_getattr_target_19;
        PyObject *tmp_getattr_attr_19;
        PyObject *tmp_getattr_default_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_getattr_target_19 = tmp_class_creation_19__metaclass;
        tmp_getattr_attr_19 = mod_consts[8];
        tmp_getattr_default_19 = mod_consts[26];
        tmp_tuple_element_73 = BUILTIN_GETATTR(tmp_getattr_target_19, tmp_getattr_attr_19, tmp_getattr_default_19);
        if (tmp_tuple_element_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_94;
            PyObject *tmp_type_arg_37;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_37 = tmp_class_creation_19__prepared;
            tmp_expression_value_94 = BUILTIN_TYPE1(tmp_type_arg_37);
            assert(!(tmp_expression_value_94 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[8]);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_tuple_element_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_55;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_55;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 82;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_55;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_133;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_134;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_yaml$tokens$$$class__19_AnchorToken_82 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__19_AnchorToken_82, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_57;
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__19_AnchorToken_82, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_57;
        }
        frame_3eecb258ea2ee25aebd111632321017c_20 = MAKE_CLASS_FRAME(codeobj_3eecb258ea2ee25aebd111632321017c, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3eecb258ea2ee25aebd111632321017c_20);
        assert(Py_REFCNT(frame_3eecb258ea2ee25aebd111632321017c_20) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__19_AnchorToken_82, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }


        tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__6___init__();

        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__19_AnchorToken_82, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_19;
        frame_exception_exit_20:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3eecb258ea2ee25aebd111632321017c_20, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3eecb258ea2ee25aebd111632321017c_20->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3eecb258ea2ee25aebd111632321017c_20, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3eecb258ea2ee25aebd111632321017c_20,
            type_description_2,
            outline_18_var___class__
        );



        assertFrameObject(frame_3eecb258ea2ee25aebd111632321017c_20);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_19;
        frame_no_exception_19:;
        goto skip_nested_handling_19;
        nested_frame_exit_19:;

        goto try_except_handler_57;
        skip_nested_handling_19:;
        {
            PyObject *tmp_assign_source_135;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_38 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_74 = mod_consts[75];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_74 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = locals_yaml$tokens$$$class__19_AnchorToken_82;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 82;
            tmp_assign_source_135 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_57;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_135;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_134 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_134);
        goto try_return_handler_57;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        Py_DECREF(locals_yaml$tokens$$$class__19_AnchorToken_82);
        locals_yaml$tokens$$$class__19_AnchorToken_82 = NULL;
        goto try_return_handler_56;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__19_AnchorToken_82);
        locals_yaml$tokens$$$class__19_AnchorToken_82 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto try_except_handler_56;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 82;
        goto try_except_handler_55;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_134);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_tuple_element_75;
        tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_75 == NULL)) {
            tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        tmp_assign_source_136 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_136, 0, tmp_tuple_element_75);
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_metaclass_value_20;
        PyObject *tmp_type_arg_38;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_95 = tmp_class_creation_20__bases;
        tmp_subscript_value_19 = mod_consts[35];
        tmp_type_arg_38 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_95, tmp_subscript_value_19, 0);
        if (tmp_type_arg_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_38);
        Py_DECREF(tmp_type_arg_38);
        if (tmp_metaclass_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_138 = SELECT_METACLASS(tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_138;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_expression_value_96;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_96 = tmp_class_creation_20__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_96, mod_consts[22]);
        tmp_condition_result_39 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_97 = tmp_class_creation_20__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[22]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        tmp_tuple_element_76 = mod_consts[78];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_76 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_76);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 89;
        tmp_assign_source_139 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_139;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_98 = tmp_class_creation_20__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_98, mod_consts[24]);
        tmp_operand_value_20 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        tmp_condition_result_40 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_getattr_target_20;
        PyObject *tmp_getattr_attr_20;
        PyObject *tmp_getattr_default_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_getattr_target_20 = tmp_class_creation_20__metaclass;
        tmp_getattr_attr_20 = mod_consts[8];
        tmp_getattr_default_20 = mod_consts[26];
        tmp_tuple_element_77 = BUILTIN_GETATTR(tmp_getattr_target_20, tmp_getattr_attr_20, tmp_getattr_default_20);
        if (tmp_tuple_element_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_99;
            PyObject *tmp_type_arg_39;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_77);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_39 = tmp_class_creation_20__prepared;
            tmp_expression_value_99 = BUILTIN_TYPE1(tmp_type_arg_39);
            assert(!(tmp_expression_value_99 == NULL));
            tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[8]);
            Py_DECREF(tmp_expression_value_99);
            if (tmp_tuple_element_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_58;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_58;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 89;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_58;
    }
    branch_no_40:;
    goto branch_end_39;
    branch_no_39:;
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_140;
    }
    branch_end_39:;
    {
        PyObject *tmp_assign_source_141;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_yaml$tokens$$$class__20_TagToken_89 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__20_TagToken_89, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_60;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__20_TagToken_89, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_60;
        }
        frame_75c5313bc6c0fdb748262941271571c8_21 = MAKE_CLASS_FRAME(codeobj_75c5313bc6c0fdb748262941271571c8, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_75c5313bc6c0fdb748262941271571c8_21);
        assert(Py_REFCNT(frame_75c5313bc6c0fdb748262941271571c8_21) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__20_TagToken_89, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_21;
        }


        tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__7___init__();

        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__20_TagToken_89, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto frame_exception_exit_21;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_20;
        frame_exception_exit_21:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_75c5313bc6c0fdb748262941271571c8_21, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_75c5313bc6c0fdb748262941271571c8_21->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_75c5313bc6c0fdb748262941271571c8_21, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_75c5313bc6c0fdb748262941271571c8_21,
            type_description_2,
            outline_19_var___class__
        );



        assertFrameObject(frame_75c5313bc6c0fdb748262941271571c8_21);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_20;
        frame_no_exception_20:;
        goto skip_nested_handling_20;
        nested_frame_exit_20:;

        goto try_except_handler_60;
        skip_nested_handling_20:;
        {
            PyObject *tmp_assign_source_142;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_40 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_78 = mod_consts[78];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_78 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = locals_yaml$tokens$$$class__20_TagToken_89;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 89;
            tmp_assign_source_142 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_60;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_142;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_141 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_141);
        goto try_return_handler_60;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        Py_DECREF(locals_yaml$tokens$$$class__20_TagToken_89);
        locals_yaml$tokens$$$class__20_TagToken_89 = NULL;
        goto try_return_handler_59;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__20_TagToken_89);
        locals_yaml$tokens$$$class__20_TagToken_89 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto try_except_handler_59;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 89;
        goto try_except_handler_58;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_141);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_tuple_element_79;
        tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_79 == NULL)) {
            tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        tmp_assign_source_143 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_143, 0, tmp_tuple_element_79);
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_metaclass_value_21;
        PyObject *tmp_type_arg_40;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_100 = tmp_class_creation_21__bases;
        tmp_subscript_value_20 = mod_consts[35];
        tmp_type_arg_40 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_100, tmp_subscript_value_20, 0);
        if (tmp_type_arg_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_40);
        Py_DECREF(tmp_type_arg_40);
        if (tmp_metaclass_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_145 = SELECT_METACLASS(tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_145;
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_expression_value_101;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_101 = tmp_class_creation_21__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_101, mod_consts[22]);
        tmp_condition_result_41 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_102 = tmp_class_creation_21__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[22]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        tmp_tuple_element_80 = mod_consts[81];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_80 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_80);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 96;
        tmp_assign_source_146 = CALL_FUNCTION(tmp_called_value_41, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_146;
    }
    {
        bool tmp_condition_result_42;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_103;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_103 = tmp_class_creation_21__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_103, mod_consts[24]);
        tmp_operand_value_21 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        tmp_condition_result_42 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_getattr_target_21;
        PyObject *tmp_getattr_attr_21;
        PyObject *tmp_getattr_default_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[25];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_getattr_target_21 = tmp_class_creation_21__metaclass;
        tmp_getattr_attr_21 = mod_consts[8];
        tmp_getattr_default_21 = mod_consts[26];
        tmp_tuple_element_81 = BUILTIN_GETATTR(tmp_getattr_target_21, tmp_getattr_attr_21, tmp_getattr_default_21);
        if (tmp_tuple_element_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_104;
            PyObject *tmp_type_arg_41;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_81);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_41 = tmp_class_creation_21__prepared;
            tmp_expression_value_104 = BUILTIN_TYPE1(tmp_type_arg_41);
            assert(!(tmp_expression_value_104 == NULL));
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[8]);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_tuple_element_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_61;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_61;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 96;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_61;
    }
    branch_no_42:;
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_147;
    }
    branch_end_41:;
    {
        PyObject *tmp_assign_source_148;
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_yaml$tokens$$$class__21_ScalarToken_96 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__21_ScalarToken_96, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_63;
        }
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__21_ScalarToken_96, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_63;
        }
        frame_69c7db615edb995aa2c7abe97685a71d_22 = MAKE_CLASS_FRAME(codeobj_69c7db615edb995aa2c7abe97685a71d, module_yaml$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_69c7db615edb995aa2c7abe97685a71d_22);
        assert(Py_REFCNT(frame_69c7db615edb995aa2c7abe97685a71d_22) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__21_ScalarToken_96, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_2 = "o";
            goto frame_exception_exit_22;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[83];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_yaml$tokens$$$function__8___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_yaml$tokens$$$class__21_ScalarToken_96, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_22;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_21;
        frame_exception_exit_22:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_69c7db615edb995aa2c7abe97685a71d_22, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_69c7db615edb995aa2c7abe97685a71d_22->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_69c7db615edb995aa2c7abe97685a71d_22, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_69c7db615edb995aa2c7abe97685a71d_22,
            type_description_2,
            outline_20_var___class__
        );



        assertFrameObject(frame_69c7db615edb995aa2c7abe97685a71d_22);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_21;
        frame_no_exception_21:;
        goto skip_nested_handling_21;
        nested_frame_exit_21:;

        goto try_except_handler_63;
        skip_nested_handling_21:;
        {
            PyObject *tmp_assign_source_149;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_42 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_82 = mod_consts[81];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_82 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_82);
            tmp_tuple_element_82 = locals_yaml$tokens$$$class__21_ScalarToken_96;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_27b89517e9f1b8d043c2adcda034d256->m_frame.f_lineno = 96;
            tmp_assign_source_149 = CALL_FUNCTION(tmp_called_value_42, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_149 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto try_except_handler_63;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_149;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_assign_source_148 = outline_20_var___class__;
        Py_INCREF(tmp_assign_source_148);
        goto try_return_handler_63;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        Py_DECREF(locals_yaml$tokens$$$class__21_ScalarToken_96);
        locals_yaml$tokens$$$class__21_ScalarToken_96 = NULL;
        goto try_return_handler_62;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_yaml$tokens$$$class__21_ScalarToken_96);
        locals_yaml$tokens$$$class__21_ScalarToken_96 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto try_except_handler_62;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 96;
        goto try_except_handler_61;
        outline_result_21:;
        UPDATE_STRING_DICT1(moduledict_yaml$tokens, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_148);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_22;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27b89517e9f1b8d043c2adcda034d256, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27b89517e9f1b8d043c2adcda034d256->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27b89517e9f1b8d043c2adcda034d256, exception_lineno);
    }



    assertFrameObject(frame_27b89517e9f1b8d043c2adcda034d256);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_22:;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("yaml.tokens", false);

    Py_INCREF(module_yaml$tokens);
    return module_yaml$tokens;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_yaml$tokens, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("yaml$tokens", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
