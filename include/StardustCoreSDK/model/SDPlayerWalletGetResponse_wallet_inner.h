/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SDPlayerWalletGetResponse_wallet_inner.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_MODEL_SDPlayerWalletGetResponse_wallet_inner_H_
#define GG_STARDUST_CORESDK_MODEL_SDPlayerWalletGetResponse_wallet_inner_H_


#include "StardustCoreSDK/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "StardustCoreSDK/model/SDPlayerWalletGetResponse_wallet_inner_monies_inner.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {

class SDPlayerWalletGetResponse_wallet_inner_monies_inner;

/// <summary>
/// 
/// </summary>
class  SDPlayerWalletGetResponse_wallet_inner
    : public ModelBase
{
public:
    SDPlayerWalletGetResponse_wallet_inner();
    virtual ~SDPlayerWalletGetResponse_wallet_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SDPlayerWalletGetResponse_wallet_inner members

    /// <summary>
    /// The name of the blockchain
    /// </summary>
    utility::string_t getBlockchain() const;
    bool blockchainIsSet() const;
    void unsetBlockchain();

    void setBlockchain(const utility::string_t& value);

    /// <summary>
    /// The players blockchain Address
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const utility::string_t& value);

    /// <summary>
    /// An array of the players balances on a given blockchain
    /// </summary>
    std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner_monies_inner>>& getMonies();
    bool moniesIsSet() const;
    void unsetMonies();

    void setMonies(const std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner_monies_inner>>& value);


protected:
    utility::string_t m_Blockchain;
    bool m_BlockchainIsSet;
    utility::string_t m_Address;
    bool m_AddressIsSet;
    std::vector<std::shared_ptr<SDPlayerWalletGetResponse_wallet_inner_monies_inner>> m_Monies;
    bool m_MoniesIsSet;
};


}
}
}
}

#endif /* GG_STARDUST_CORESDK_MODEL_SDPlayerWalletGetResponse_wallet_inner_H_ */