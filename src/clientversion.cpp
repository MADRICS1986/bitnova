<<<<<<< HEAD
// Copyright (c) 2012-2022 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <bitcoin-build-config.h> // IWYU pragma: keep
=======
// Copyright (c) 2012-2022 The BitNova Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <bitnova-build-config.h> // IWYU pragma: keep
>>>>>>> 5360f2baff (Initialized BitNova project)

#include <clientversion.h>
#include <util/string.h>
#include <util/translation.h>

#include <tinyformat.h>

#include <string>
#include <vector>

using util::Join;

/**
 * Name of client reported in the 'version' message. Report the same name
<<<<<<< HEAD
 * for both bitcoind and bitcoin-qt, to make it harder for attackers to
=======
 * for both bitnovad and bitnova-qt, to make it harder for attackers to
>>>>>>> 5360f2baff (Initialized BitNova project)
 * target servers or GUI users specifically.
 */
const std::string UA_NAME("Satoshi");


<<<<<<< HEAD
#include <bitcoin-build-info.h>
// The <bitcoin-build-info.h>, which is generated by the build environment (cmake/script/GenerateBuildInfo.cmake),
=======
#include <bitnova-build-info.h>
// The <bitnova-build-info.h>, which is generated by the build environment (cmake/script/GenerateBuildInfo.cmake),
>>>>>>> 5360f2baff (Initialized BitNova project)
// could contain only one line of the following:
//   - "#define BUILD_GIT_TAG ...", if the top commit is tagged
//   - "#define BUILD_GIT_COMMIT ...", if the top commit is not tagged
//   - "// No build information available", if proper git information is not available

//! git will put "#define GIT_COMMIT_ID ..." on the next line inside archives. $Format:%n#define GIT_COMMIT_ID "%H"$

#ifdef BUILD_GIT_TAG
    #define BUILD_DESC BUILD_GIT_TAG
    #define BUILD_SUFFIX ""
#else
    #define BUILD_DESC "v" CLIENT_VERSION_STRING
    #if CLIENT_VERSION_IS_RELEASE
        #define BUILD_SUFFIX ""
    #elif defined(BUILD_GIT_COMMIT)
        #define BUILD_SUFFIX "-" BUILD_GIT_COMMIT
    #elif defined(GIT_COMMIT_ID)
        #define BUILD_SUFFIX "-g" GIT_COMMIT_ID
    #else
        #define BUILD_SUFFIX "-unk"
    #endif
#endif

static std::string FormatVersion(int nVersion)
{
    return strprintf("%d.%d.%d", nVersion / 10000, (nVersion / 100) % 100, nVersion % 100);
}

std::string FormatFullVersion()
{
    static const std::string CLIENT_BUILD(BUILD_DESC BUILD_SUFFIX);
    return CLIENT_BUILD;
}

/**
<<<<<<< HEAD
 * Format the subversion field according to BIP 14 spec (https://github.com/bitcoin/bips/blob/master/bip-0014.mediawiki)
=======
 * Format the subversion field according to BIP 14 spec (https://github.com/bitnova/bips/blob/master/bip-0014.mediawiki)
>>>>>>> 5360f2baff (Initialized BitNova project)
 */
std::string FormatSubVersion(const std::string& name, int nClientVersion, const std::vector<std::string>& comments)
{
    std::string comments_str;
    if (!comments.empty()) comments_str = strprintf("(%s)", Join(comments, "; "));
    return strprintf("/%s:%s%s/", name, FormatVersion(nClientVersion), comments_str);
}

std::string CopyrightHolders(const std::string& strPrefix)
{
    const auto copyright_devs = strprintf(_(COPYRIGHT_HOLDERS), COPYRIGHT_HOLDERS_SUBSTITUTION).translated;
    std::string strCopyrightHolders = strPrefix + copyright_devs;

<<<<<<< HEAD
    // Make sure Bitcoin Core copyright is not removed by accident
    if (copyright_devs.find("Bitcoin Core") == std::string::npos) {
        strCopyrightHolders += "\n" + strPrefix + "The Bitcoin Core developers";
=======
    // Make sure BitNova Core copyright is not removed by accident
    if (copyright_devs.find("BitNova Core") == std::string::npos) {
        strCopyrightHolders += "\n" + strPrefix + "The BitNova Core developers";
>>>>>>> 5360f2baff (Initialized BitNova project)
    }
    return strCopyrightHolders;
}

std::string LicenseInfo()
{
<<<<<<< HEAD
    const std::string URL_SOURCE_CODE = "<https://github.com/bitcoin/bitcoin>";
=======
    const std::string URL_SOURCE_CODE = "<https://github.com/bitnova/bitnova>";
>>>>>>> 5360f2baff (Initialized BitNova project)

    return CopyrightHolders(strprintf(_("Copyright (C) %i-%i"), 2009, COPYRIGHT_YEAR).translated + " ") + "\n" +
           "\n" +
           strprintf(_("Please contribute if you find %s useful. "
                       "Visit %s for further information about the software."),
                     CLIENT_NAME, "<" CLIENT_URL ">")
               .translated +
           "\n" +
           strprintf(_("The source code is available from %s."), URL_SOURCE_CODE).translated +
           "\n" +
           "\n" +
           _("This is experimental software.") + "\n" +
           strprintf(_("Distributed under the MIT software license, see the accompanying file %s or %s"), "COPYING", "<https://opensource.org/licenses/MIT>").translated +
           "\n";
}
