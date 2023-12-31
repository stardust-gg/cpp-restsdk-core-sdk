/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * TokenEndpointsApi.h
 *
 * 
 */

#ifndef GG_STARDUST_CORESDK_TokenEndpointsApi_H_
#define GG_STARDUST_CORESDK_TokenEndpointsApi_H_



#include "StardustCoreSDK/ApiClient.h"

#include "StardustCoreSDK/model/Error.h"
#include "StardustCoreSDK/Object.h"
#include "StardustCoreSDK/model/SDTokenBurnRequest.h"
#include "StardustCoreSDK/model/SDTokenGetResponse.h"
#include "StardustCoreSDK/model/SDTokenMintBulkRequest.h"
#include "StardustCoreSDK/model/SDTokenMutateRequest.h"
#include "StardustCoreSDK/model/SDTokenTransferRequest.h"
#include "StardustCoreSDK/model/SDTokenWithdrawRequest.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace gg {
namespace stardust {
namespace coresdk {

using namespace gg::stardust::coresdk::model;

class  ITokenEndpointsApi
{
public:
    ITokenEndpointsApi() = default;
    virtual ~ITokenEndpointsApi() = default;

    virtual pplx::task<std::shared_ptr<Object>> tokenBurnPost(
        std::shared_ptr<SDTokenBurnRequest> sDTokenBurnRequest
    ) const = 0;
    virtual pplx::task<std::vector<std::shared_ptr<SDTokenGetResponse>>> tokenGetGet(
        boost::optional<utility::string_t> tokenIds,
        boost::optional<utility::string_t> returnExplorerLinks
    ) const = 0;
    virtual pplx::task<std::vector<int32_t>> tokenMintBulkPost(
        std::shared_ptr<SDTokenMintBulkRequest> sDTokenMintBulkRequest
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> tokenMutatePut(
        std::shared_ptr<SDTokenMutateRequest> sDTokenMutateRequest
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> tokenPropsRemoveDelete(
        utility::string_t tokenId,
        utility::string_t props
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> tokenTransferPost(
        std::shared_ptr<SDTokenTransferRequest> sDTokenTransferRequest
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Object>> tokenWithdrawPost(
        std::shared_ptr<SDTokenWithdrawRequest> sDTokenWithdrawRequest
    ) const = 0;
};

class  TokenEndpointsApi  : public ITokenEndpointsApi 
{
public:
    using Base = ITokenEndpointsApi;

    explicit TokenEndpointsApi( std::shared_ptr<const ApiClient> apiClient );

    ~TokenEndpointsApi() override;

    /// <summary>
    /// Burn Token
    /// </summary>
    /// <remarks>
    /// Burns token on-chain. Cannot be reversed.
    /// </remarks>
    /// <param name="sDTokenBurnRequest"></param>
    pplx::task<std::shared_ptr<Object>> tokenBurnPost(
        std::shared_ptr<SDTokenBurnRequest> sDTokenBurnRequest
    ) const override;
    /// <summary>
    /// Get Token
    /// </summary>
    /// <remarks>
    /// Some of the details of this token are based upon the Template that it was created from (using token/mint)
    /// </remarks>
    /// <param name="tokenIds">Stringify Array of token ids (ex. &#39;[3589, 3580]&#39;) (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="returnExplorerLinks">If true returns blockchain explorer links for every token. Defaults to false. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<SDTokenGetResponse>>> tokenGetGet(
        boost::optional<utility::string_t> tokenIds,
        boost::optional<utility::string_t> returnExplorerLinks
    ) const override;
    /// <summary>
    /// Mint Tokens
    /// </summary>
    /// <remarks>
    /// Mint tokens to a player
    /// </remarks>
    /// <param name="sDTokenMintBulkRequest"></param>
    pplx::task<std::vector<int32_t>> tokenMintBulkPost(
        std::shared_ptr<SDTokenMintBulkRequest> sDTokenMintBulkRequest
    ) const override;
    /// <summary>
    /// Mutate Token
    /// </summary>
    /// <remarks>
    /// Mutates a Property of a Token
    /// </remarks>
    /// <param name="sDTokenMutateRequest"></param>
    pplx::task<std::shared_ptr<Object>> tokenMutatePut(
        std::shared_ptr<SDTokenMutateRequest> sDTokenMutateRequest
    ) const override;
    /// <summary>
    /// Remove Token Property
    /// </summary>
    /// <remarks>
    /// Removes a Tokens Property from Your Game
    /// </remarks>
    /// <param name="tokenId">Token Id returned from token/create (ex. 5)</param>
    /// <param name="props">Stringify Array of token mutable property names ex: &#39;[\&quot;exp\&quot;, \&quot;health\&quot;]&#39; }</param>
    pplx::task<std::shared_ptr<Object>> tokenPropsRemoveDelete(
        utility::string_t tokenId,
        utility::string_t props
    ) const override;
    /// <summary>
    /// Transfer Tokens
    /// </summary>
    /// <remarks>
    /// Use this Endpoint to Facilitate Moving Tokens from one Player to Another
    /// </remarks>
    /// <param name="sDTokenTransferRequest"></param>
    pplx::task<std::shared_ptr<Object>> tokenTransferPost(
        std::shared_ptr<SDTokenTransferRequest> sDTokenTransferRequest
    ) const override;
    /// <summary>
    /// Withdraw Token
    /// </summary>
    /// <remarks>
    /// Withdraw tokens from a Stardust Wallet
    /// </remarks>
    /// <param name="sDTokenWithdrawRequest"></param>
    pplx::task<std::shared_ptr<Object>> tokenWithdrawPost(
        std::shared_ptr<SDTokenWithdrawRequest> sDTokenWithdrawRequest
    ) const override;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* GG_STARDUST_CORESDK_TokenEndpointsApi_H_ */

