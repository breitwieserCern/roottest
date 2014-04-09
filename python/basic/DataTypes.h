#include "Rtypes.h"

const int N = 5;


//===========================================================================
struct CppyyTestPod {
   int    m_int;
   double m_double;
};


//===========================================================================
enum EFruit { kApple=78, kBanana=29, kCitrus=34 };


//===========================================================================
class FourVector {
public:
    FourVector(double x, double y, double z, double t) :
       m_cc_called(false), m_x(x), m_y(y), m_z(z), m_t(t) {}
    FourVector(const FourVector& s) :
       m_cc_called(true), m_x(s.m_x), m_y(s.m_y), m_z(s.m_z), m_t(s.m_t) {}

    double operator[](int i) {
       if (i == 0) return m_x;
       if (i == 1) return m_y;
       if (i == 2) return m_z;
       if (i == 3) return m_t;
       return -1;
    }

    bool operator==(const FourVector& o) {
       return (m_x == o.m_x && m_y == o.m_y &&
               m_z == o.m_z && m_t == o.m_t);
    }

public:
    bool m_cc_called;

private:
    double m_x, m_y, m_z, m_t;
};


//===========================================================================
class CppyyTestData {
public:
    CppyyTestData();
    ~CppyyTestData();

// special cases
    enum EWhat { kNothing=6, kSomething=111, kLots=42 };

// helper
    void destroy_arrays();

// getters
    bool                 get_bool();
    char                 get_char();
    signed char          get_schar();
    unsigned char        get_uchar();
    short                get_short();
    unsigned short       get_ushort();
    int                  get_int();
    unsigned int         get_uint();
    long                 get_long();
    unsigned long        get_ulong();
    long long            get_llong();
    unsigned long long   get_ullong();
    Long64_t             get_long64();
    ULong64_t            get_ulong64();
    float                get_float();
    double               get_double();
    long double          get_ldouble();
    EWhat                get_enum();

    bool*           get_bool_array();
    bool*           get_bool_array2();
    short*          get_short_array();
    short*          get_short_array2();
    unsigned short* get_ushort_array();
    unsigned short* get_ushort_array2();
    int*            get_int_array();
    int*            get_int_array2();
    unsigned int*   get_uint_array();
    unsigned int*   get_uint_array2();
    long*           get_long_array();
    long*           get_long_array2();
    unsigned long*  get_ulong_array();
    unsigned long*  get_ulong_array2();

    float*  get_float_array();
    float*  get_float_array2();
    double* get_double_array();
    double* get_double_array2();

    CppyyTestPod get_pod_val();                 // for m_pod
    CppyyTestPod* get_pod_val_ptr();
    CppyyTestPod& get_pod_val_ref();
    CppyyTestPod*& get_pod_ptrref();

    CppyyTestPod* get_pod_ptr();                // for m_ppod

// getters const-ref
    const bool&               get_bool_cr();
    const char&               get_char_cr();
    const signed char&        get_schar_cr();
    const unsigned char&      get_uchar_cr();
    const short&              get_short_cr();
    const unsigned short&     get_ushort_cr();
    const int&                get_int_cr();
    const unsigned int&       get_uint_cr();
    const long&               get_long_cr();
    const unsigned long&      get_ulong_cr();
    const long long&          get_llong_cr();
    const unsigned long long& get_ullong_cr();
    const Long64_t&           get_long64_cr();
    const ULong64_t&          get_ulong64_cr();
    const float&              get_float_cr();
    const double&             get_double_cr();
    const long double&        get_ldouble_cr();
    const EWhat&              get_enum_cr();

// setters
    void set_bool(bool);
    void set_char(char);
    void set_schar(signed char);
    void set_uchar(unsigned char);
    void set_short(short);
    void set_ushort(unsigned short);
    void set_int(int);
    void set_uint(unsigned int);
    void set_long(long);
    void set_ulong(unsigned long);
    void set_llong(long long);
    void set_ullong(unsigned long long);
    void set_long64(Long64_t);
    void set_ulong64(ULong64_t);
    void set_float(float);
    void set_double(double);
    void set_ldouble(long double);
    void set_enum(EWhat);

    void set_pod_val(CppyyTestPod);             // for m_pod
    void set_pod_ptr_in(CppyyTestPod*);
    void set_pod_ptr_out(CppyyTestPod*);
    void set_pod_ref(const CppyyTestPod&);
    void set_pod_ptrptr_in(CppyyTestPod**);
    void set_pod_void_ptrptr_in(void**);
    void set_pod_ptrptr_out(CppyyTestPod**);
    void set_pod_void_ptrptr_out(void**);

    void set_pod_ptr(CppyyTestPod*);            // for m_ppod

// setters const-ref
    void set_bool_cr(const bool&);
    void set_char_cr(const char&);
    void set_schar_cr(const signed char&);
    void set_uchar_cr(const unsigned char&);
    void set_short_cr(const short&);
    void set_ushort_cr(const unsigned short&);
    void set_int_cr(const int&);
    void set_uint_cr(const unsigned int&);
    void set_long_cr(const long&);
    void set_ulong_cr(const unsigned long&);
    void set_llong_cr(const long long&);
    void set_ullong_cr(const unsigned long long&);
    void set_long64_cr(const Long64_t&);
    void set_ulong64_cr(const ULong64_t&);
    void set_float_cr(const float&);
    void set_double_cr(const double&);
    void set_ldouble_cr(const long double&);
    void set_enum_cr(const EWhat&);

// passers
    short*          pass_array(short*);
    unsigned short* pass_array(unsigned short*);
    int*            pass_array(int*);
    unsigned int*   pass_array(unsigned int*);
    long*           pass_array(long*);
    unsigned long*  pass_array(unsigned long*);
    float*          pass_array(float*);
    double*         pass_array(double*);

    short*          pass_void_array_h(void* a) { return pass_array((short*)a); }
    unsigned short* pass_void_array_H(void* a) { return pass_array((unsigned short*)a); }
    int*            pass_void_array_i(void* a) { return pass_array((int*)a); }
    unsigned int*   pass_void_array_I(void* a) { return pass_array((unsigned int*)a); }
    long*           pass_void_array_l(void* a) { return pass_array((long*)a); }
    unsigned long*  pass_void_array_L(void* a) { return pass_array((unsigned long*)a); }
    float*          pass_void_array_f(void* a) { return pass_array((float*)a); }
    double*         pass_void_array_d(void* a) { return pass_array((double*)a); }

// strings
    const char* get_valid_string(const char* in);
    const char* get_invalid_string();

public:
// basic types
    bool                 m_bool;
    char                 m_char;
    signed char          m_schar;
    unsigned char        m_uchar;
    short                m_short;
    unsigned short       m_ushort;
    int                  m_int;
    unsigned int         m_uint;
    long                 m_long;
    unsigned long        m_ulong;
    long long            m_llong;
    unsigned long long   m_ullong;
    Long64_t             m_long64;
    ULong64_t            m_ulong64;
    float                m_float;
    double               m_double;
    long double          m_ldouble;
    EWhat                m_enum;

// array types
    bool            m_bool_array[N];
    bool*           m_bool_array2;
    short           m_short_array[N];
    short*          m_short_array2;
    unsigned short  m_ushort_array[N];
    unsigned short* m_ushort_array2;
    int             m_int_array[N];
    int*            m_int_array2;
    unsigned int    m_uint_array[N];
    unsigned int*   m_uint_array2;
    long            m_long_array[N];
    long*           m_long_array2;
    unsigned long   m_ulong_array[N];
    unsigned long*  m_ulong_array2;
 
    float   m_float_array[N];
    float*  m_float_array2;
    double  m_double_array[N];
    double* m_double_array2;

// object types
    CppyyTestPod m_pod;
    CppyyTestPod* m_ppod;

public:
    static bool                    s_bool;
    static char                    s_char;
    static signed char             s_schar;
    static unsigned char           s_uchar;
    static short                   s_short;
    static unsigned short          s_ushort;
    static int                     s_int;
    static unsigned int            s_uint;
    static long                    s_long;
    static unsigned long           s_ulong;
    static long long               s_llong;
    static unsigned long long      s_ullong;
    static Long64_t                s_long64;
    static ULong64_t               s_ulong64;
    static float                   s_float;
    static double                  s_double;
    static long double             s_ldouble;
    static EWhat                   s_enum;

private:
    bool m_owns_arrays;
};


//= global functions ========================================================
long get_pod_address(CppyyTestData& c);
long get_int_address(CppyyTestData& c);
long get_double_address(CppyyTestData& c);


//= global variables/pointers ===============================================
extern int g_int;
void set_global_int(int i);
int get_global_int();

extern CppyyTestPod* g_pod;
bool is_global_pod(CppyyTestPod* t);
void set_global_pod(CppyyTestPod* t);
CppyyTestPod* get_global_pod();
CppyyTestPod* get_null_pod();